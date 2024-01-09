#include <stdio.h>

int main()
{

    // float input;
    float age;
    printf("Enter your Age\n");
    scanf("%f", &age);

    printf("you age is %f\n\n", age);

    // character input
    char star;
    printf("Enter your Star\n");
    scanf(" %c", &star); // Notice the space before %c to consume any preceding whitespace
    printf("you star is %c", star);
    return 0;
}