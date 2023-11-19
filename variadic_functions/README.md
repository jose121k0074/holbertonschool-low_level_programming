C - Variadic functions

General

    What are variadic functions
    How to use va_start, va_arg and va_end macros
    Why and how to use the const type qualifier

files in the folder:

- variadic_functions.h - The prototypes of all your functions and the prototype of the _putchar function are included
- 0-sum_them_all.c - function that returns the sum of all its parameters.
- 1-print_numbers.c -  function that prints numbers, followed by a new line.
- 2-print_strings.c - function that prints strings, followed by a new line.
- 3-print_all.c - function that prints anything.

    Prototype: void print_all(const char * const format, ...);
    where format is a list of types of arguments passed to the function
        c: char
        i: integer
        f: float
        s: char * (if the string is NULL, print (nil) instead
        any other char should be ignored
        see example
    You are not allowed to use for, goto, ternary operator, else, do ... while
    You can use a maximum of
        2 while loops
        2 if
    You can declare a maximum of 9 variables
    You are allowed to use printf
    Print a new line at the end of your function

