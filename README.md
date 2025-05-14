# OSSP Project - Linux Lite Operating System

This repository contains my Operating System and System Programming (OSSP) project for Bahir Dar University. It includes the installation of Linux Lite in a virtual environment and the implementation of the `mkdir()` system call in C.

## a. OS Installation (Linux Lite in VirtualBox)

Linux Lite is a lightweight Linux distribution designed for beginners and users switching from Windows. I installed it on a virtual machine using VirtualBox by allocating system resources and booting from the Linux Lite ISO. The setup included creating a user, setting time zone, and updating the system. During installation, I resolved a system freeze by increasing RAM and CPU. The OS successfully booted and ran smoothly after setup.

## b. System Call - mkdir() Implementation

I implemented the `mkdir()` system call in C to create a new directory in Linux Lite. The program uses standard POSIX headers and `mkdir(path, 0700)` to assign permissions. It was compiled with `gcc` and run from the terminal. If successful, it prints a confirmation message; otherwise, it shows an error. This demonstrates how system calls work at the OS level.
