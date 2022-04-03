# 42 Cursus - libft
<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/appinha/42cursus-00-Libft?color=blueviolet" />
	<img alt="Number of lines of code" src="https://img.shields.io/tokei/lines/github/appinha/42cursus-00-Libft?color=blueviolet" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/appinha/42cursus-00-Libft?color=blue" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/appinha/42cursus-00-Libft?color=blue" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/appinha/42cursus-00-Libft?color=brightgreen" />
</p>
## Info

My implementation of some useful C functions and some additional ones to use it in future projects of 42.

Libft (42cursus) 2022-2023

- Status: still updating (I use libft a lot so I keep improving it)
- Actual Status : no yet.
- Result        : 125
- Observations : (null)

## How to install and use

- Clone libft into your project folder

```sh
git clone https://github.com/mokouchaoui/libft_42.git
```

- Run make inside libft folder (make rules: all, clean, fclean, re)

```sh
make
```

- Include libft.h in the header of your C file

```c
#include <libft.h>
```

- Or include only the part that you are going to use (list of functions below)

```c
#include <libft/ft_char.h>
#include <libft/ft_str.h>
#include <libft/ft_mem.h>
#include <libft/ft_nbr.h>
#include <libft/ft_fd.h>
#include <libft/ft_lst.h>
#include <libft/ft_dlst.h>
#include <libft/ft_printf.h>
```

## How to compile with libft

### Compile directly your .c files

- Just make sure you add libft (`libft.a`) and you specify `libft.h` path (`-I` flag) when you compile

```sh
gcc (...)(.c files) -o (output file) ./libft/libft.a -I ./libft/inc
```

###  Compile objects (`.o`) (for Makefiles)

- If you want to compile firts your .c files into `.o`, you will need to specify the `-c` flag (no linking) when compiling to `.o` files, and indicate the `libft.h` path with the `-I` flag

```sh
gcc -c (.c file) -o (.o output file) -I ./libft/inc
```

- Now we will compile all the `.o` into a program, and do the linking part with `-L` and `-l`, just specify the `libft.a` path with the `-L` flag

```sh
gcc (...)(.o files) -o (output file) -I ./libft/inc -L ./libft -lft
```

- ✨ Magic ✨

## List of functions

### ft_char
- [ft_islower](https://github.com/mokouchaoui/libft/blob/main/src/ft_char/ft_islower.c) - `int ft_islower(int c)`
- [ft_isupper](https://github.com/mokouchaoui/libft/blob/main/src/ft_char/ft_isupper.c) - `int ft_isupper(int c)`
- [ft_isspace](https://github.com/mokouchaoui/libft/blob/main/src/ft_char/ft_isspace.c) - `int ft_isspace(int c)`
- [ft_isblank](https://github.com/mokouchaoui/libft/blob/main/src/ft_char/ft_isspace.c) - `int ft_isblank(int c)`
- [ft_isalpha](https://github.com/mokouchaoui/libft/blob/main/src/ft_char/ft_isalpha.c) - `int ft_isalpha(int c)`
- [ft_isdigit](https://github.com/mokouchaoui/libft/blob/main/src/ft_char/ft_isdigit.c) - `int ft_isdigit(int c)`
- [ft_isalnum](https://github.com/mokouchaoui/libft/blob/main/src/ft_char/ft_isalnum.c) - `int ft_isalnum(int c)`
- [ft_isascii](https://github.com/mokouchaoui/libft/blob/main/src/ft_char/ft_isascii.c) - `int ft_isascii(int c)`
- [ft_isprint](https://github.com/mokouchaoui/libft/blob/main/src/ft_char/ft_isprint.c) - `int ft_isprint(int c)`
- [ft_iscntrl](https://github.com/mokouchaoui/libft/blob/main/src/ft_char/ft_iscntrl.c) - `int ft_iscntrl(int c)`
- [ft_tolower](https://github.com/mokouchaoui/libft/blob/main/src/ft_char/ft_tolower.c) - `int ft_tolower(int c)`
- [ft_toupper](https://github.com/mokouchaoui/libft/blob/main/src/ft_char/ft_toupper.c) - `int ft_toupper(int c)`

### ft_str
- [ft_strlen](https://github.com/mokouchaoui/libft/blob/main/src/ft_str/ft_strlen.c) - `size_t ft_strlen(const char *s`
- [ft_strcpy](https://github.com/mokouchaoui/libft/blob/main/src/ft_str/ft_strcpy.c) - `char *ft_strcpy(char *dst, const char *src)`
- [ft_strlcpy](https://github.com/mokouchaoui/libft/blob/main/src/ft_str/ft_strlcpy.c) - `size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)`
- [ft_strcat](https://github.com/mokouchaoui/libft/blob/main/src/ft_str/ft_strcat.c) - `char *ft_strcat(char *s1, const char *s2)`
- [ft_strlcat](https://github.com/mokouchaoui/libft/blob/main/src/ft_str/ft_strlcat.c) - `size_t ft_strlcat(char *dst, const char *src, size_t dstsize)`
- [ft_strchr](https://github.com/mokouchaoui/libft/blob/main/src/ft_str/ft_strchr.c) - `char *ft_strchr(const char *s, int c)`
- [ft_strrchr](https://github.com/mokouchaoui/libft/blob/main/src/ft_str/ft_strrchr.c) - `char *ft_strrchr(const char *s, int c)`
- [ft_strncmp](https://github.com/mokouchaoui/libft/blob/main/src/ft_str/ft_strncmp.c) - `int ft_strncmp(const char *s1, const char *s2, size_t n)`
- [ft_strnstr](https://github.com/mokouchaoui/libft/blob/main/src/ft_str/ft_strnstr.c) - `char *ft_strnstr(const char *haystack, const char *needle, size_t len)`
- [ft_strdup](https://github.com/mokouchaoui/libft/blob/main/src/ft_str/ft_strdup.c) - `char *ft_strdup(const char *s1)`
- [ft_substr](https://github.com/mokouchaoui/libft/blob/main/src/ft_str/ft_substr.c) - `char *ft_substr(const char *s, unsigned int start, size_t len)`
- [ft_strjoin](https://github.com/mokouchaoui/libft/blob/main/src/ft_str/ft_strjoin.c) - `char *ft_strjoin(const char *s1, const char *s2)`
- [ft_strtrim](https://github.com/mokouchaoui/libft/blob/main/src/ft_str/ft_strtrim.c) - `char *ft_strtrim(const char *s1, const char *set)`
- [ft_split](https://github.com/mokouchaoui/libft/blob/main/src/ft_str/ft_split.c) - `char **ft_split(const char *s1, const char *set)`
- [ft_strmap](https://github.com/mokouchaoui/libft/blob/main/src/ft_str/ft_strmap.c) - `char *ft_strmap(const char *s, char (*f)(char))`
- [ft_strmapi](https://github.com/mokouchaoui/libft/blob/main/src/ft_str/ft_strmapi.c) - `char *ft_strmapi(const char *s, char (*f)(unsigned int, char))`
- [ft_striter](https://github.com/mokouchaoui/libft/blob/main/src/ft_str/ft_striter.c) - `void ft_striter(char *s, void (*f)(char *))`
- [ft_striteri](https://github.com/mokouchaoui/libft/blob/main/src/ft_str/ft_striteri.c) - `void ft_striteri(char *s, void (*f)(unsigned int, char *))`
- [ft_strrev](https://github.com/mokouchaoui/libft/blob/main/src/ft_str/ft_strrev.c) - `char *ft_strrev(char *s)`

### ft_mem
- ft_memset
- ft_bzero
- ft_memcpy
- ft_memmove
- ft_memchr
- ft_memcmp
- ft_calloc
- ft_realloc

### ft_nbr
- ft_atoi
- ft_itoa
- ft_atoi_base
- ft_itoa_base
- ft_convert_base
- ft_intlen
- ft_intlen_base
- ft_uintlen
- ft_uintlen_base
- ft_ulonglen
- ft_ulonglen_base

### ft_fd
- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd
- ft_get_next_line

### ft_lst
- ft_lstnew
- ft_lstadd_front
- ft_lstadd_back
- ft_lstsize
- ft_lstlast
- ft_lstdelone
- ft_lstclear
- ft_lstiter
- ft_lstmap

### ft_dlst
- ft_dlstnew
- ft_dlstadd_front
- ft_dlstadd_back
- ft_dlstsize
- ft_dlstfirst
- ft_dlstlast
- ft_dlstdelone
- ft_dlstclear
- ft_dlstiter
- ft_dlstmap

### ft_printf
- ft_printf
- ft_dprintf



[![forthebadge](https://forthebadge.com/images/badges/made-with-c.svg)](https://forthebadge.com)
[![forthebadge](https://forthebadge.com/images/badges/built-with-love.svg)](https://forthebadge.com)

This is my libft project from the 42 cursus,

- 📫 need help  : **mokoucha@student.42heilbronn.de**

<hr>

<h3 align="left">Support:</h3>
<p><a href="https://www.buymeacoffee.com/mohamedkouL"> <img align="left" src="https://cdn.buymeacoffee.com/buttons/v2/default-yellow.png" height="50" width="210" alt="mohamedkouL" /></a></p><br><br>
