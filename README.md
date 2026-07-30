*This project has been created as part of the 42 curriculum by esasal-i.*

# libft

## Description

`libft` is a custom C library developed as part of the 42 curriculum.

The objective of the project is to reimplement a selection of standard C library functions in order to better understand low-level programming concepts such as memory management, string manipulation, pointer arithmetic, and data structures.

In addition to the libc recreations, the library also includes utility functions and a linked list API that will be reused throughout later 42 projects.

The project is written in C following the 42 Norm and compiled into a static library (`libft.a`).

---

## Instructions

### Requirements

- `cc`
- `make`
- Unix-based environment (Linux or macOS)

### Compilation

Clone the repository and compile the library:

```bash
git clone https://github.com/url-not-created-yet.git libft
cd libft
make
````

This generates the static library:

```bash
libft.a
```

### Using libft in another project

Include the header in your source files:

```c
#include "libft.h"
```

Compile your program linking against the library:

```bash
cc your_file.c -L. -lft -I. -o your_program
```

### Makefile rules

| Rule           | Description                       |
| -------------- | --------------------------------- |
| `make` / `all` | Compile the library               |
| `make clean`   | Remove object files               |
| `make fclean`  | Remove object files and `libft.a` |
| `make re`      | Rebuild the library from scratch  |

---

## Library Overview

The library is divided into several groups of functions.

### Character classification and conversion

| Function | Description |
|----------|-------------|
| `ft_isalpha` | Checks whether the character is alphabetic. |
| `ft_isdigit` | Checks whether the character is a decimal digit. |
| `ft_isalnum` | Checks whether the character is alphanumeric. |
| `ft_isascii` | Checks whether the character is a valid ASCII value. |
| `ft_isprint` | Checks whether the character is printable. |
| `ft_toupper` | Converts a lowercase letter to uppercase. |
| `ft_tolower` | Converts an uppercase letter to lowercase. |

*0 if False, 1 if True*

### String manipulation
| Function | Description |
|----------|-------------|
| `ft_strlen` | Calculates the length of a string. |
| `ft_strlcpy` | Copies a string into a destination buffer with size protection. |
| `ft_strlcat` | Appends a string to another string with size protection. |
| `ft_strchr` | Returns a pointer to the first occurrence of a character in a string. |
| `ft_strrchr` | Returns a pointer to the last occurrence of a character in a string. |
| `ft_strncmp` | Compares two strings up to `n` characters. |
| `ft_strnstr` | Locates a substring inside a string, searching up to `n` characters. |
| `ft_strdup` | Allocates memory and returns a duplicate of a string. |
| `ft_substr` | Allocates memory and returns a substring from the string `s`, starting at index `start` with a maximum length of `len`. |
| `ft_strjoin` | Allocates memory and returns a new string formed by concatenating `s1` and `s2`. |
| `ft_strtrim` | Allocates memory and returns a copy of `s1` with the characters specified in `set` removed from the beginning and end. |
| `ft_split` | Allocates memory and returns an array of strings obtained by splitting `s` using the character `c` as delimiter. |
| `ft_strmapi` | Applies the function `f` to each character of the string `s` and creates a new string with the results. |
| `ft_striteri` | Applies the function `f` to each character of the string `s`, passing its index and allowing modification in place. |

### Memory manipulation

| Function | Description |
|----------|-------------|
| `ft_memset` | Fills a block of memory with a specific byte value. |
| `ft_bzero` | Sets a block of memory to zero. |
| `ft_memcpy` | Copies `n` bytes from one memory area to another without handling overlap. |
| `ft_memmove` | Copies `n` bytes from one memory area to another while correctly handling overlap. |
| `ft_memchr` | Searches for a byte value inside a memory area. |
| `ft_memcmp` | Compares two memory areas byte by byte. |
| `ft_calloc` | Allocates memory for an array and initializes all bytes to zero. |

### Conversion functions

| Function | Description |
|----------|-------------|
| `ft_atoi` | Converts a string into an integer. |
| `ft_itoa` | Allocates memory and returns a string representing the integer received as argument. |

### File descriptor output

| Function | Description |
|----------|-------------|
| `ft_putchar_fd` | Writes the character `c` to the given file descriptor. |
| `ft_putstr_fd` | Writes the string `s` to the given file descriptor. |
| `ft_putendl_fd` | Writes the string `s` followed by a newline to the given file descriptor. |
| `ft_putnbr_fd` | Writes the integer `n` to the given file descriptor. |

### Linked list API

The project also includes a singly linked list implementation based on the `t_list` structure:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

Implemented list functions:

### Linked list API

| Function          | Description                                                                                                                                                           |
| ----------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| `ft_lstnew`       | Allocates memory and returns a new node. The member variable `content` is initialized with the value of the parameter `content`, and `next` is initialized to `NULL`. |
| `ft_lstadd_front` | Adds the node `new` at the beginning of the list `lst`.                                                                                                               |
| `ft_lstsize`      | Counts the number of nodes in the list.                                                                                                                               |
| `ft_lstlast`      | Returns the last node of the list.                                                                                                                                    |
| `ft_lstadd_back`  | Adds the node `new` at the end of the list `lst`.                                                                                                                     |
| `ft_lstdelone`    | Takes a node as parameter and frees its content using the function `del`, then frees the node itself.                                                                 |
| `ft_lstclear`     | Deletes and frees the given node and every successor of that node using the function `del` and `free()`. The pointer to the list is set to `NULL`.                    |
| `ft_lstiter`      | Iterates through the list `lst` and applies the function `f` to the content of each node.                                                                             |
| `ft_lstmap`       | Iterates through the list `lst`, applies the function `f` to each node content, and creates a new list resulting from the successive applications of `f`.             |

```
```

---

## Technical Notes

* Written in C
* Compiled with `-Wall -Wextra -Werror`
* No global variables
* Library generated using `ar`

---

## Resources

### Documentation

* [https://man7.org/linux/man-pages/](https://man7.org/linux/man-pages/)
* [https://cplusplus.com/reference/clibrary/](https://cplusplus.com/reference/clibrary/)
* [https://makefiletutorial.com/](https://makefiletutorial.com/)

### AI Usage

AI tools were used selectively for:

* reviewing documentation,
* generating additional test cases,
* detecting memory management issues,
* and proofreading the README.

All implementation, debugging, and understanding of the project were done manually.
