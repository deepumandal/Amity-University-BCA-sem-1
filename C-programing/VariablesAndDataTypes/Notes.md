
# Variables and DataTypes 

**Variable**  is like a box where you can keep information. It's a name given to a specific spot in the computer's memory. This name helps the computer remember and work with the data stored inside that spot.


## Rules for Declaring Variables

1. **Variables are Case-Sensitive:** Characters from 'a' to 'z' and 'A' to 'Z' are considered different. They must be used precisely as declared in the program.

2. **Naming Convention:** 
   - The first character should be from `a-z`, `A-Z`, or `_`.
   - All characters that aren't special characters are allowed in the middle, except `_`.
   - **For example:**
     ```c
     int index = 0;    // Valid
     int _index = 0;   // Valid
     int 1index = 1;   // Invalid
     int &index = 1;   // Invalid
     int index_ = 0;   // Valid
     int ind3ex = 0;   // Valid
     ```
   - Hyphens `-` and empty spaces `""` are not allowed as the first character.
   - `_` (underscore) is the only special character permitted for variable names.



# Data Types

| Data Type      | Size (in bytes) |
|----------------|-----------------|
| `char or signed char`         | 1               |
| `unsigned char`          | 1               |
| `int or signed int`        |1               |
| `unsigned int`       | 2               |
| `short int or unsigned short int`    | 2               |
| `signed short int`     | 2          |
| `long int or signed long int`  | 4        |
| `unsigned long int` | 4               |
| `float`  | 4               |
| `double`  | 8               |
| `long double`  | 10               |


- there is no boolean or string types in c as it is one of oldest programming language.
-  Also there is slight difference in class and object in c.

### Most Used DataTypes
- **int:**  
    - It primally used to store whole number, however we can give the value like `3.1400` but it will store only `3` other will get ignored.
    - Range (`-2,147,483,648` to `2,147,483,647`), however on this range of number can be stored using int.
    -
        *example*
        ``` 
        int whole = 0;

        int input;
        scanf("this is my %d", &input)
        prinf(input)
        ```
        - here int input; in variable declarations;
        -  scanf() is inbuild function provided by c, used to take input's from user end.
        - %d under "" is telling the input will be an integer;
        and `&input` here & is telling to store input value to &input location


- **float:** 
    - it is used for storing decimal values like `3.14`. 
      *for example*
    ```
        float pi  = 3.14;
        float age;
        printf("Enter your Age\n");
        scanf("%f", &age);
        printf("you age is %f", age);
        return 0;
    ```

- **char:** 
    - this variable store's every character under ''.
    - `''`  tells that the value be stored is only single character only.
    *for example*
    ```
        // character input
        char star;
        printf("Enter your Star\n");
        scanf(" %c", &star); // Notice the space before %c to consume       any preceding whitespace
        printf("you star is %c", star);
    ```


