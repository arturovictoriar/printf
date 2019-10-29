# _printf description funtions
The  _printf()  function produce output according to a format as described below.  The function printf() write output to stdout, the standard output stream.  This function write the output under the control  of  a  format string  that  specifies  how   subsequent   arguments  (or arguments accessed via the variable-length argument facilities of stdarg(3)) are converted for output.

This document stores a simple description of each function of each file in [_printf](https://github.com/arvicrin/printf) repository.

## Files

- [_printf.c](https://github.com/arvicrin/printf/blob/master/_printf.c "_printf.c")
- [buffer.c](https://github.com/arvicrin/printf/blob/master/buffer.c "buffer.c")
- [flagbinary.c](https://github.com/arvicrin/printf/blob/master/flagbinary.c "flagbinary.c")
- [flagdecimal.c](https://github.com/arvicrin/printf/blob/master/flagdecimal.c "flagdecimal.c")
- [flagpointer.c](https://github.com/arvicrin/printf/blob/master/flagpointer.c "flagpointer.c")
- [flagspecialstring.c](https://github.com/arvicrin/printf/blob/master/flagspecialstring.c "flagspecialstring.c")
- [flagstring.c](https://github.com/arvicrin/printf/blob/master/flagstring.c "flagstring.c")
- [moreconversion.c](https://github.com/arvicrin/printf/blob/master/moreconversion.c "moreconversion.c")
- [flagreverse.c](https://github.com/arvicrin/printf/blob/master/flagreverse.c "flagreverse.c")
- [flagrot13.c](https://github.com/arvicrin/printf/blob/master/flagrot13.c "flagrot13.c")
- [holberton.h](https://github.com/arvicrin/printf/blob/master/holberton.h "holberton.h")
- [man_3_printf](https://github.com/arvicrin/printf/blob/master/man_3_printf "man_3_printf")
## Funtions
### Funtions in [_printf.c](https://github.com/arvicrin/printf/blob/master/_printf.c "_printf.c") file

- **int  _printf(const  char *format, ...)**: Is the main function of _printf and call the others funtions.
- **int  _putc(char a)**: Take a char and prints it through buffer function.
- **int (*equal(const  char *format))()**: returns the rigth function of the specifier.
### Funtions in [buffer.c](https://github.com/arvicrin/printf/blob/master/buffer.c "buffer.c") file
- **int  _write(int file, char *data, int lenght)**: stores, temporarily, the data in 1024 buffer, then print it.
### Funtions in [flagbinary.c](https://github.com/arvicrin/printf/blob/master/flagbinary.c "flagbinary.c") file
- **int  bina(va_list a)**: Converts of a decimal number in binary and prints it through buffer function.
### Funtions in [flagdecimal.c](https://github.com/arvicrin/printf/blob/master/flagdecimal.c "flagdecimal.c") file
- **int  inte(va_list a)**: Sets a number and prints it through buffer function.
### Funtions in [flagpointer.c](https://github.com/arvicrin/printf/blob/master/flagpointer.c "flagpointer.c") file
- **int  point(va_list a)**:  Sets pointer address in hexadecimal and prints it through buffer function.
### Funtions in [flagspecialstring.c](https://github.com/arvicrin/printf/blob/master/flagspecialstring.c "flagspecialstring.c") file
- **int  sst(va_list a)**: Converts a specific ascii character in hexadecimal and prints it through buffer function.
### Funtions in [flagstring.c](https://github.com/arvicrin/printf/blob/master/flagstring.c "flagstring.c") file
- **int  st(va_list a)**: Sets a string and prints it through buffer function.
- **int  ch(va_list a)**: Sets a char and prints it through buffer function.
- **int  por(va_list a)**: Sets a porcentage sign and prints it through buffer function.

### Funtions in [moreconversion.c](https://github.com/arvicrin/printf/blob/master/moreconversion.c "moreconversion.c") file
- **int  octa(va_list a)**: Converts a decimal number to an octal and prints it through buffer function.
- **int  unsig(va_list a)**: Sets a unsigned int and prints it through buffer function.
- **int  hexal(va_list a)**: Converts a decimal number to hexadecimal lower case and prints it through buffer function.
- **int  hexau(va_list a)**: Converts a decimal number to hexadecimal upper case and prints it through buffer function.

### Funtions in [flagreverse.c](https://github.com/arvicrin/printf/blob/master/flagreverse.c "flagreverse.c") file

- **int reve(va_list a)**: Converts a string to its reverse and prints it through buffer function.

### Funtions in [flagrot13.c](https://github.com/arvicrin/printf/blob/master/flagrot13.c "flagrot13.c") file

- **int  rot13(va_list a)**: Converts a string to rot13 encoding and prints it through buffer function.


### Funtions in [holberton.h](https://github.com/arvicrin/printf/blob/master/holberton.h "holberton.h") file
This file contains all the prototipes, structures and libraries used in [_printf](https://github.com/arvicrin/printf).

### Funtions in [man_3_printf](https://github.com/arvicrin/printf/blob/master/man_3_printf "man_3_printf") file
This file contains the manual of the [_printf](https://github.com/arvicrin/printf)  project.

## Reference 
To see full description of this project, go to [man_3_printf](https://github.com/arvicrin/printf/blob/master/man_3_printf "man_3_printf") of this [_printf](https://github.com/arvicrin/printf) repository.

## Autors
**_printf project** made by Arturo Victoria Rincón and Gonzalo Gómez Millán
