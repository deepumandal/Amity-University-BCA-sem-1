#include <stdio.h>
#include <string.h>

int main()
{
    char star[] = "*";
    int n;
    printf("enter value of n\n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char str[n * 2];
        strcpy(str, ""); // Initialize the string

        for (int j = 0; j < n; j++)
        {
            strcat(str, star);
        }
        printf("%s\n", str);
    }

    return 0;
}