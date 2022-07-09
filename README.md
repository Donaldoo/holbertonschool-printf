# _printf Function

***The _printf function is created as part of _printf project for Holberton School. This Repo has has all the code for our (Donaldoo & tizihoxha's) custom function called _printf(). It is a mini-version of C Language function printf() from stdio.h, and our function _printf() attempts to replicate some of the processess of the C function printf().***

This function is similar with [printf](https://man7.org/linux/man-pages/man3/printf.3.html).


<img style="display: block;-webkit-user-select: none;margin: auto;cursor: zoom-in;background-color: hsl(0, 0%, 90%);transition: background-color 300ms;" src="https://files.slack.com/files-pri/T01BXJ5C1PT-F03NW154K6G/my_first_board.jpg" width="730" height="300">

## C language standard functions used

* ``typedef struct``,``va_start``, ``va_end``, ``va_copy``,``va_arg``

​


(This function is similar with [printf](https://man7.org/linux/man-pages/man3/printf.3.html).)

Variables format | Description
--- | ---
%c | used to print characters
%s | used to print string
%d, %i | used to print integers

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
**[print_functions.c](https://github.com/Donaldoo/holbertonschool-printf/blob/main/print_functions.c)** | File containing functions to print variable format `char`, `string` & `int` using only `_putchar`.
**[_printf.c](https://github.com/Donaldoo/holbertonschool-printf/blob/main/_printf.c)** | File contains structure initialised with values and checks format entered from stdio.

#### Authors

:octocat: Tiziana Hoxha - https://github.com/tizihoxha

:octocat: Donaldo Kumaraku - https://github.com/Donaldoo
