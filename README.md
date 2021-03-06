# README for _printf :page_with_curl:

A C program reproducing the printf function (formatted output conversion) as
part of the [Holberton School](https://holbertonschool.com.au/) Foundations
curriculum for Low-Level Programming.

## Usage :clapper:
To use the `_printf` function, compile all .c files in the repository and
include the header `main.h`.

### Compilation
All files are compiled with gcc using the following flags:
`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c`

### Example
```
#include "main.h"

int main(void)
{
	int n = 9;
	_printf("My cat is %d years old.\n", n);

	return (0);
}
```

Output:
```
$ ./a.out
My cat is 9 years old.
$
```

### Coding Style
All files are written in C programming language and follows the
[Betty coding style](https://github.com/holbertonschool/Betty/wiki).

## Description :open_book:
### File Description
- **_printf.c**: contains the _printf function, which uses a struct array
containing pointers to functions to handle conversion specifiers
- **main.h**: header file containing all prototypes
- **man_3_print**: manual for the **_printf** function, accessed via
`man ./man_3_print`
- **print_S_hex.c**: contains the function to print a string with non printable
characters converted to hexadecimal
- **print_hex.c**: contains the function to convert unsigned int to hexadecimal
(uppercase and lowercase)
- **print_integer.c**: contains the function to display integers
- **print_number.c**: contains functions to display unsigned int, binary and
octal numbers
- **print_rev_string.c**: contains the function to reverse a string
- **print_string.c**: contains functions to display single characters,
strings as displayed and strings converted to rot13 encryption.

### Function Description
Our `_printf` function writes output to standard output. The format string
is composed of zero or more directives, and handles conversion specifiers
which specifies how arguments (accessed through `va_arg`)  are converted for
output.

**Prototype:** `int _printf(const char *format, ...);`

### Conversion Specifiers
The character `%` when followed by one of the following conversion specifiers
will apply the conversion and display as follows:
- `d`: decimal number
- `i`: integer
- `c`*: character
- `s`: string (constant char *) as displayed
- `S`: string with non printable characters converted to hexadecimal
- `R`: string converted to ROT13 encryption
- `r`: reverses the entered string
- `%`: no conversion, single % will display
- `o`: unsigned integer
- `b`: binary (unsigned int converted to binary)
- `o`: octal (unsigned int converted to octal)
- `x` or `X`: hexadecimal (unsigned int converted to hexadecimal)

### Return Value
Upon success,`_printf` returns the number of characters printed, excluding
the null byte. Upon error, the function returns `-1`.

## Authors :pencil2:
- Yuan Fang [[yuan-fang-228](https://github.com/yuan-fang-228)]
- Farah McCurdy [[farahmc](https://github.com/farahmc)]

## Acknowledgements :trophy:
This README borrowed from the `printf` standard library function manual
[printf](https://linux.die.net/man/3/printf).
