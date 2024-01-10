#include <stdio.h>

int main()
{

    int age;
    char gender;

    printf("Gender: \n for male type m for female type f\n");
    scanf(" %c", &gender);
    printf("Enter your age\n");
    // scanf("age : %d", &age);
     scanf("%d", &age); 

    if (gender == 'F')
    {
        if (age > 18)
        {
            printf("You are allowed to marriage\n");
        }
        else
        {
            printf("wait for: %d\n", 18 - age);
        }
    }
    else
    {
        if (age > 21)
        {
            printf("You are allowed to marriage\n");
        }
        else
        {
            printf("wait for: %d\n", 18 - age);
        }
    }

    return 0;
}