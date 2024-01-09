#include <stdio.h>

int main()
{

    // int input;
    // scanf("this is my %d", input);
    // printf("%d\n",input);
    // int number = 24.5;

    int input;
    printf("Enter an integer: ");
    scanf("%d", &input); // Use %d to read an integer and use & to get the memory address of 'input'

    printf("Input: %d\n", input); // Print the entered integer

    float number = 24.5; // Use float data type to store a floating-point value
    printf("Number: %f\n", number);

    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    /*
    - int is a datatype which store only whole numbers
    - even if you store number of decimal digits it only considers
      whole value as input number-
      outpur : 24
    */
    float number1 = 24;
    /*
    - float is a datatype which store decimal digits if we provides
    whole number then the output will automatically be converted into deciamal
    output : 24.000000
    */

    char starboy = '*';
    /*
    char is used for storing string character
    note : always put it into '' single quotes
    also this only hold single character like A and B etc.
    */
    /*

    to write entire  sentence you need to use "", double quote
    and [] after variable like this
    */

    char sentence[] = "hello this is my name";
    printf("star is %c\n", starboy);
    printf("star is %s\n", sentence);
    printf("Number is %d\n", number);
    printf("Number is %f\n", number1);

    return 0;
}