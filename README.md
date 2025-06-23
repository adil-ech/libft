# 🧱 Libft

Libft is a foundational C library that reimplements a selection of standard C library functions. It is often the very first project in the 42 curriculum, aiming to ensure students have a solid understanding of memory handling, string manipulation, and linked lists in C.

---

## 📚 Table of Contents
- [Overview](#-overview)
- [Features](#-features)
- [Installation](#-installation)
- [Usage](#-usage)
- [File Structure](#-file-structure)
- [Subject Breakdown](#-subject-breakdown)
- [License](#-license)
- [Subject PDF](#-subject-pdf)

---

## 📖 Overview

This project consists of re-creating common C standard library functions from `<ctype.h>`, `<string.h>`, `<stdlib.h>`, and `<unistd.h>`, as well as implementing custom utility functions and linked list manipulation tools.

---

## ✨ Features

### Mandatory Functions

- Character checks: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- Memory manipulation: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
- String operations: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`
- Type conversions: `ft_atoi`, `ft_tolower`, `ft_toupper`
- Memory allocation: `ft_calloc`
- Advanced string manipulation: `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`
- File descriptor output: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

### Bonus Functions (Linked List Operations)

- `ft_lstnew` – Create a new list element  
- `ft_lstadd_front` – Add element at the beginning  
- `ft_lstsize` – Count list elements  
- `ft_lstlast` – Get the last element  
- `ft_lstadd_back` – Add element at the end  
- `ft_lstdelone` – Delete a single element  
- `ft_lstclear` – Clear the entire list  
- `ft_lstiter` – Apply a function to each element  
- `ft_lstmap` – Map a function over the list into a new one

---

## ⚙️ Installation

```bash
git clone https://github.com/adil-ech/libft
cd libft
make
```

This will generate `libft.a`, a static library that you can link with your own C programs using:

```bash
gcc your_program.c -L. -lft
```

---

## 🚀 Usage

In your C file:

```c
#include "libft.h"
```

Then compile with:

```bash
gcc main.c -L. -lft
```

Ensure that both `libft.a` and `libft.h` are present in your project directory or properly linked.

---

## 📁 File Structure

```text
libft/
├── ft_*.c            # Libft function implementations
├── ft_*.h            # Header files (mostly libft.h)
├── Makefile
└── libft.h           # Main header
```

---

## 📄 Subject Breakdown

### ✅ Part 1 — Libc Functions

Reimplement standard C functions such as:

- `isalpha`, `isdigit`, `isalnum`, `isascii`, `isprint`  
- `strlen`, `memset`, `bzero`, `memcpy`, `memmove`, `strlcpy`, `strlcat`, `toupper`, `tolower`  
- `strchr`, `strrchr`, `strncmp`, `memchr`, `memcmp`  
- `strnstr`, `atoi`, `calloc`, `strdup`  

### ✅ Part 2 — Additional Functions

Implement higher-level string and output utilities:

- `substr`, `strjoin`, `strtrim`, `split`  
- `itoa`, `strmapi`, `striteri`  
- `putchar_fd`, `putstr_fd`, `putendl_fd`, `putnbr_fd`  

### 🔁 Bonus Part — Linked List Functions

If all mandatory functions pass Moulinette:

- `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`  
- `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`  

---

## 📬 License

This project is part of the [42 Network](https://42.fr) curriculum and is subject to their academic integrity policy. You are encouraged to use it as a learning resource only.

---

## 📄 Subject PDF

You can read the official 42 Libft subject here:  
👉 [Libft Subject PDF](./en.subject.pdf)
