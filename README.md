# Operating System 🌐

![Linux Lite](https://img.shields.io/badge/Linux%20Lite-Installation-blue.svg) ![mkdir() Implementation](https://img.shields.io/badge/mkdir%28%29-Implementation-green.svg)

Welcome to the **Operating System** repository! This project focuses on the installation of Linux Lite and the implementation of the `mkdir()` system call for an OSSP assignment. Here, you will find all the necessary resources, instructions, and insights to help you navigate through the project efficiently.

## Table of Contents 📚

- [Introduction](#introduction)
- [Getting Started](#getting-started)
- [Installation Instructions](#installation-instructions)
- [mkdir() System Call Implementation](#mkdir-system-call-implementation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)
- [Releases](#releases)
- [Contact](#contact)

## Introduction 🖥️

Operating systems are the backbone of computer functionality. They manage hardware resources and provide services for application software. This repository specifically deals with Linux Lite, a lightweight Linux distribution, and the implementation of the `mkdir()` system call, which is essential for creating directories in a file system.

### Why Linux Lite?

Linux Lite is designed to be easy to use and lightweight, making it an ideal choice for users transitioning from Windows or those who need a fast, efficient operating system. Its simplicity and user-friendly interface allow users to focus on their tasks without being overwhelmed by complexity.

### What is `mkdir()`?

The `mkdir()` system call is a function in Unix-like operating systems that allows users to create new directories. Understanding how to implement this call provides insight into how operating systems manage file systems and directory structures.

## Getting Started 🚀

To get started with this repository, you will need a few tools and resources:

### Prerequisites

1. A computer with a compatible architecture (x86 or x64).
2. A working installation of Linux Lite or any Linux distribution.
3. Basic knowledge of command-line operations.
4. Familiarity with C programming language.

### Cloning the Repository

You can clone this repository using the following command:

```bash
git clone https://github.com/Ahmeddfk215/Operating-system.git
```

This command will create a local copy of the repository on your machine.

## Installation Instructions 📦

Follow these steps to install Linux Lite and set up the project:

1. **Download Linux Lite**: Visit the [Linux Lite website](https://www.linuxliteos.com/download.php) to download the ISO file.

2. **Create a Bootable USB**:
   - Use tools like Rufus or Etcher to create a bootable USB drive.
   - Select the downloaded ISO file and follow the prompts to create the USB.

3. **Boot from USB**:
   - Insert the USB into your computer and restart.
   - Access the BIOS/UEFI settings to boot from the USB drive.

4. **Install Linux Lite**:
   - Follow the on-screen instructions to install Linux Lite on your machine.

5. **Clone the Repository**:
   - Open a terminal and navigate to your desired directory.
   - Run the clone command mentioned above.

6. **Navigate to the Project Directory**:
   ```bash
   cd Operating-system
   ```

7. **Compile the Code**:
   - Ensure you have the necessary development tools installed:
   ```bash
   sudo apt-get install build-essential
   ```
   - Compile the project using:
   ```bash
   make
   ```

## mkdir() System Call Implementation 🛠️

The `mkdir()` system call is implemented in C. Below is a brief overview of how it works.

### Code Overview

```c
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>

int main() {
    const char *dir_name = "new_directory";
    int status = mkdir(dir_name, 0755);
    
    if (status == 0) {
        printf("Directory created successfully\n");
    } else {
        perror("Error creating directory");
    }
    
    return 0;
}
```

### Explanation

- **Include Directives**: The program includes necessary headers for input/output and system calls.
- **Directory Name**: A constant string holds the name of the directory to be created.
- **mkdir() Call**: The `mkdir()` function attempts to create the directory with specified permissions.
- **Error Handling**: The program checks the return status of `mkdir()` and prints a message accordingly.

### Compiling and Running the Code

To compile and run the code:

1. Save the code in a file named `mkdir_example.c`.
2. Use the following command to compile:
   ```bash
   gcc mkdir_example.c -o mkdir_example
   ```
3. Run the executable:
   ```bash
   ./mkdir_example
   ```

## Usage 📋

After setting up the project, you can create directories using the implemented `mkdir()` function. Modify the directory name in the code to create different directories as needed.

### Example Commands

- To create a directory named `test_dir`, change the `dir_name` variable:
```c
const char *dir_name = "test_dir";
```

- Recompile and run the program to see the new directory created.

## Contributing 🤝

Contributions are welcome! If you would like to contribute to this project, please follow these steps:

1. Fork the repository.
2. Create a new branch for your feature or bug fix.
3. Make your changes and commit them.
4. Push your changes to your forked repository.
5. Create a pull request.

Please ensure that your code follows the existing style and includes comments for clarity.

## License 📄

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.

## Releases 📦

You can find the latest releases of this project at [Releases](https://github.com/Ahmeddfk215/Operating-system/releases). Please download and execute the necessary files as needed.

## Contact 📞

For any inquiries or issues, please feel free to reach out:

- **Email**: your-email@example.com
- **GitHub**: [Ahmeddfk215](https://github.com/Ahmeddfk215)

Thank you for visiting the **Operating System** repository! We hope you find it useful for your OSSP assignment and your journey into understanding operating systems.