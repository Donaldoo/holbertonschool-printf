# _printf Function :page_facing_up:

**The `_printf function` is created as part of _printf project for *Holberton School*. This Repo has all the code for our (Donaldoo & tizihoxha's) custom function called `_printf()`. It is a mini-version of C Language function `printf()` from `stdio.h`, and our function `_printf()` attempts to replicate some of the processess of the C function `printf()`.**

**This function is similar with [printf](https://man7.org/linux/man-pages/man3/printf.3.html).**

​![](https://user-images.githubusercontent.com/105612348/178139744-dbfb10e7-caf5-4925-91d4-214299a837d6.jpg)


## C language standard functions used

* ``typedef struct``,``va_start``, ``va_end``, ``va_copy``,``va_arg``,``_putchar``



(This function is similar with [printf](https://man7.org/linux/man-pages/man3/printf.3.html).)

Format specifier | Description
--- | ---
%c | Used to print characters.
%s | Used to print string.
%d, %i | Used to print integers.
%R | Used to print Rot13'd string.
%b | Used to print binary.
%o | Used to print octal.
%x | Used to print hexadecimal integer (lowercase).
%X | Used to print hexadecimal integer (uppercase).


## Usage

The directory contents should be compiled with the following command:

```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

```

`_printf()` function may be used, in any C language program.  This is the
prototype:

```
_printf(const char *[FORMAT], ...)
```

__FORMAT__ refers to a string with any number of specifiers followed by a '`%`'
symbol. 

 ***_prinf usage example***
```
int main()
{
      _printf("%s, %d, %c\n", Name, Age, Gender);
      return (0);
} 
```

**File name** | **Description**
---- | ----
**[main.h](https://github.com/Donaldoo/holbertonschool-printf/blob/main/main.h)** | Header file conatins all the prototypes & the structure used in this project.
**[_putchar](https://github.com/Donaldoo/holbertonschool-printf/blob/main/_putchar.c)** | Function used to print only one character.
**[_strlen.c](https://github.com/Donaldoo/holbertonschool-printf/blob/main/_strlen.c)** | Function to find length of a string.
**[print_functions.c](https://github.com/Donaldoo/holbertonschool-printf/blob/main/print_functions.c)** | File containing functions to print variable format `char`, `string` & `int` using only `_putchar`.
**[rot13.c](https://github.com/Donaldoo/holbertonschool-printf/blob/main/rot13.c)** | File contains function to encode a string to rot13.
**[dec_to_binary.c](https://github.com/Donaldoo/holbertonschool-printf/blob/main/dec_to_binary.c)** | Function to convert decimal numbers to binary.
**[dec_to_octal.c](https://github.com/Donaldoo/holbertonschool-printf/blob/main/dec_to_octal.c)** | File contains functions to convert decimal to octal & handle unsigned int.
**[dec_to_hexadecimal.c](https://github.com/Donaldoo/holbertonschool-printf/blob/main/dec_to_hexadecimal.c)** | Function to convert decimal numbers to hexadecimal (lowercase and uppercase).
**[_printf.c](https://github.com/Donaldoo/holbertonschool-printf/blob/main/_printf.c)** | File contains structure initialised with values and checks format entered from stdio.

#### Authors

:octocat: Tiziana Hoxha - https://github.com/tizihoxha

:octocat: Donaldo Kumaraku - https://github.com/Donaldoo
