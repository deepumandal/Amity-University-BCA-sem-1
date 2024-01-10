#include <stdio.h>
#include <string.h>

void printTable(int x)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d : %d\n", x, i, x * i);
    }
}

int main()
{

    int isNew = 0;

    do
    {
        long int n;
        printf(!isNew ? 
        "Enter Your first number\n" :
         "Enter number\n");
        scanf("%d", &n);
        if (isNew == 0)
        {
            isNew = 1;
        }
        printTable(n);
    } while (1);

    return 0;
}