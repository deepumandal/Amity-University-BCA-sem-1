#include <stdio.h>

int main()
{

    float width, height;
    printf("Enter your width\n");
    scanf("%f", &width);
    printf("Enter your height\n");
    scanf("%f", &height);

    printf("The perimeter of the given input is %f", 2 * (width + height));
    return 0;
}