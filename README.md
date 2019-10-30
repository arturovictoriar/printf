# _printf description funtions
This document stores a simple description of each function of each file in [_printf](https://github.com/arvicrin/printf) repository.

## Files

- [_printf.c](https://github.com/arvicrin/printf/blob/master/_printf.c "_printf.c")
- [buffer.c](https://github.com/arvicrin/printf/blob/master/buffer.c "buffer.c")
- [flagbinary.c](https://github.com/arvicrin/printf/blob/master/flagbinary.c "flagbinary.c")
- [flagdecimal.c](https://github.com/arvicrin/printf/blob/master/flagdecimal.c "flagdecimal.c")
- [flagpointer.c](https://github.com/arvicrin/printf/blob/master/flagpointer.c "flagpointer.c")
- [flagspecialstring.c](https://github.com/arvicrin/printf/blob/master/flagspecialstring.c "flagspecialstring.c")
- [flagstring.c](https://github.com/arvicrin/printf/blob/master/flagstring.c "flagstring.c")
- [holberton.h](https://github.com/arvicrin/printf/blob/master/holberton.h "holberton.h")
- [moreconversion.c](https://github.com/arvicrin/printf/blob/master/moreconversion.c "moreconversion.c")
- [man_3_printf](https://github.com/arvicrin/printf/blob/master/man_3_printf "man_3_printf")
## Funtions
### Funtions in [_printf.c](https://github.com/arvicrin/printf/blob/master/_printf.c "_printf.c") file

- **int  _printf(const  char *format, ...)**: Is the main function of _printf and call the others funtions.
- **int  _putc(char a)**: manipulate a char to be printed.
- **int (*equal(const  char *format))()**: return the rigth function of the specifier.
### Funtions in [buffer.c](https://github.com/arvicrin/printf/blob/master/buffer.c "buffer.c") file
- **int  _write(int file, char *data, int lenght)**: store all  data in 1024 buffer.
### Funtions in [flagbinary.c](https://github.com/arvicrin/printf/blob/master/flagbinary.c "flagbinary.c") file
- **int  bina(va_list a)**: convert of a decimal number in binary.
### Funtions in [flagdecimal.c](https://github.com/arvicrin/printf/blob/master/flagdecimal.c "flagdecimal.c") file
- **int  inte(va_list a)**: set a number.
### Funtions in [flagpointer.c](https://github.com/arvicrin/printf/blob/master/flagpointer.c "flagpointer.c") file
- **int  point(va_list a)**:  set pointer address in hexadecimal.
### Funtions in [flagspecialstring.c](https://github.com/arvicrin/printf/blob/master/flagspecialstring.c "flagspecialstring.c") file
- **int  sst(va_list a)**: convert a specific ascii character in hexadecimal.
### Funtions in [flagstring.c](https://github.com/arvicrin/printf/blob/master/flagstring.c "flagstring.c") file
- **int  st(va_list a)**: set a string.
- **int  ch(va_list a)**: set a char.
- **int  por(va_list a)**: set a porcentage sign.

### Funtions in [moreconversion.c](https://github.com/arvicrin/printf/blob/master/moreconversion.c "moreconversion.c") file
- **int  octa(va_list a)**: convert a decimal number to octal.
- **int  unsig(va_list a)**: set a unsigned int.
- **int  hexal(va_list a)**: convert a decimal number to hexadecimal lower case.
- **int  hexau(va_list a)**: convert a decimal number to hexadecimal upper case.

### Funtions in [flagreverse.c](https://github.com/arvicrin/printf/blob/master/flagreverse.c "flagreverse.c") file

- **int reve(va_list a)**: convert a string to its reverse.

### Funtions in [flagrot13.c](https://github.com/arvicrin/printf/blob/master/man_3_printf "flagrot13.c") file

- **int  rot13(va_list a)**: convert a string in rot13.


### Funtions in [holberton.h](https://github.com/arvicrin/printf/blob/master/holberton.h "holberton.h") file
This file contains all the prototipes, structures and libraries used in [_printf](https://github.com/arvicrin/printf).

### Funtions in [man_3_printf](https://github.com/arvicrin/printf/blob/master/man_3_printf "man_3_printf") file
This file contains the manual of the [_printf](https://github.com/arvicrin/printf)  project.

## Reference 
To see full description of this project, go to [man_3_printf](https://github.com/arvicrin/printf/blob/master/man_3_printf "man_3_printf") of this [https://github.com/arvicrin/printf](https://github.com/arvicrin/printf) repository.

## Autors
**_printf project** made by Arturo Victoria Rincón and Gonzalo Gómez Millán
