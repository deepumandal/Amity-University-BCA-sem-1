#include <stdio.h>

int main()
{

    int first, second, third;
    printf("Enter first Number\n");
    scanf("%d", &first);
    printf("Enter second Number\n");
    scanf("%d", &second);
    printf("Enter third Number\n");
    scanf("%d", &third);

    printf("Avg : %d", (first + second + third) / 3);
    return 0;
}