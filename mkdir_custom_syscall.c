
#include <linux/syscalls.h>
#include <linux/fs.h>
#include <linux/namei.h>
#include <linux/slab.h>
#include <linux/uaccess.h>

SYSCALL_DEFINE2(mkdir_custom, const char __user *, pathname, umode_t, mode)
{
    struct path path;
    struct dentry *dentry;
    char *kernel_pathname;
    int error;

    // Allocate memory for the pathname
    kernel_pathname = kmalloc(PATH_MAX, GFP_KERNEL);
    if (!kernel_pathname)
        return -ENOMEM;

    // Copy the pathname from user space to kernel space
    if (strncpy_from_user(kernel_pathname, pathname, PATH_MAX) < 0) {
        kfree(kernel_pathname);
        return -EFAULT;
    }

    // Lookup the path to create the directory
    dentry = kern_path_create(AT_FDCWD, kernel_pathname, &path, LOOKUP_DIRECTORY);
    if (IS_ERR(dentry)) {
        kfree(kernel_pathname);
        return PTR_ERR(dentry);
    }

    // Lock the inode to prevent race conditions
    inode_lock(d_inode(path.dentry));

    // Attempt to create the directory with given mode
    error = vfs_mkdir(d_inode(path.dentry), dentry, mode);

    // Unlock the inode and release path resources
    inode_unlock(d_inode(path.dentry));
    done_path_create(&path, dentry);

    // Free allocated memory
    kfree(kernel_pathname);

    return error;
}
