#include <stdio.h>

int main()
{
    int num;
    printf("Enter your Even Number\n");
    scanf("%d", &num);
    printf(num % 2 == 0 ? "Even number" : "Not an Even number");
    return 0;
}