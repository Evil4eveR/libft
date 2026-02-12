# Libft - 42 Project

*This project has been created as part of the 42 curriculum by ymarmoud.*

## Description

**Libft** is a custom C library created as part of the 42 curriculum. It implements a range of standard library functions and utility functions that are commonly used in many C projects. The goal of this project is to practice memory management, pointers, and how to implement C standard library functions from scratch.

### Features:
- **Memory manipulation functions** (`malloc`, `memmove`, `memcpy`)
- **String manipulation functions** (`strlen`, `strdup`, `strchr`, `strnstr`, `strlcpy`)
- **Utility functions** (`isalpha`, `isdigit`, `atoi`, `toupper`, `putchar_fd`)
- **Linked list functions** (`ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, etc.)

This library will be used as a base for various other projects in the 42 curriculum, providing essential tools for further development.

## Instructions

1. **Clone the repository**:
    ```bash
    git clone https://github.com/ymarmoud/libft.git
    ```

2. **Navigate to the project directory**:
    ```bash
    cd libft
    ```

3. **Compile the library**:
    ```bash
    make
    ```

4. **To clean up compiled files**:
    ```bash
    make clean
    ```

5. **To remove all compiled files**:
    ```bash
    make fclean
    ```

6. **To recompile from scratch**:
    ```bash
    make re
    ```

### Linking the Library

Once compiled, you can link the `libft.a` static library to other C projects. Include `libft.h` and link with `libft.a` during compilation:

```bash
gcc -Wall -Wextra -Werror -o my_project my_project.c -L. -lft