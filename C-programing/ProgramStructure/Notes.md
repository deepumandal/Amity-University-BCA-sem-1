# Program Structure

Here A brief description of program Structure

```
#include<stdio.h>

int main(){

    return 0;
}
```

- **preprocessor directive:** The line `#include<stdio.h>` in C is called a preprocessor directive. It tells the compiler to include the standard input and output library (stdio.h) in the program, allowing the use of functions like `printf()` and `scanf()` for input and output operations.

- **int main() { }:** This is the main function of the program. In C, every program must have a `main()` function; it's the entry point of execution.

  - _`int` before `main()` specifies that the function returns an integer value._

  - The curly braces `{ }` indicate the beginning and end of the function body. Code inside these braces is what the main() function will execute.

  - The `return 0;` statement inside `main()` signifies the end of the `main()` function. In this context, `return 0;` indicates that the program has executed successfully. In C, returning `0` from `main()` typically implies successful completion of the program execution.

# constants

In C programming, constants are fixed values that do not change during program execution. There are various types of constants:

1. **integer constants:**
   These are whole numbers without any fractional or decimal part. They can be represented in decimal, octal (using a leading 0), or hexadecimal (using a leading 0x) format. For example:

   - Decimal: 123
   - Octal: 0123
   - Hexadecimal: 0xAB

2. **real constants:**
   These are numbers with a fractional part. They include a decimal point. For example:

   - 3.14
   - 2.0e-5

3. **character constants:**
   These represent single characters enclosed within single quotes. For instance:
   - 'A'
   - '5'
   - '\n' (newline character)

# Reserver keywords

These are the english words that are reserved by c. you cannot use them as variable name there are total `32` reserver keywords

| Column 1 | Column 2 | Column 3 | Column 4 | Column 5 |
| -------- | -------- | -------- | -------- | -------- |
| auto     | break    | case     | char     | const    |
| continue | default  | do       | double   | else     |
| enum     | extern   | float    | for      | goto     |
| if       | int      | long     | register | return   |
| short    | signed   | sizeof   | static   | struct   |
| switch   | typedef  | union    | unsigned | void     |
| volatile | while    |          |          |          |

# comments

1. **single Line** : `//`

2. **multi Line** : `/**/`

# format specifires

In C programming, format specifiers are used with input and output functions like printf() and scanf() to specify the type of data being used. Here are some common format specifiers:

| Format Specifier | Description                                                                           |
| ---------------- | ------------------------------------------------------------------------------------- |
| %d               | Represents an integer value.                                                          |
| %f               | Represents a floating-point value (decimal notation).                                 |
| %c               | Represents a single character.                                                        |
| %s               | Represents a string of characters.                                                    |
| %p               | Represents a pointer address.                                                         |
| %x or %X         | Represents an unsigned hexadecimal integer (lowercase/uppercase).                     |
| %o               | Represents an unsigned octal integer.                                                 |
| %u               | Represents an unsigned decimal integer.                                               |
| %e or %E         | Represents a floating-point number in scientific notation (lowercase/uppercase).      |
| %g or %G         | Represents a floating-point number in either %f or %e notation (lowercase/uppercase). |
| %%               | Represents a literal percent sign (%).                                                |

# compilation

A program that converts c code to binary format fo that computer hardware can understand

![./compilation.png](images/compilation)
