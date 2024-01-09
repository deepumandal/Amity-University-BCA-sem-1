
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

    - *`int` before `main()` specifies that the function returns an integer value.*

    - The curly braces `{ }` indicate the beginning and end of the function body. Code inside these braces is what the main() function will execute.

    - The `return 0;` statement inside `main()` signifies the end of the `main()` function. In this context, `return 0;` indicates that the program has executed successfully. In C, returning `0` from `main()` typically implies successful completion of the program execution.