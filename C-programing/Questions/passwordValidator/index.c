#include <stdio.h>
#include <string.h>

int main()
{

    char password[] = "password";

    char input_password[20];

    printf("Enter your password\n");
    scanf("%s", &input_password);

    printf(strcmp(password, input_password) == 0 ? "OK\n" : "ERROR\n");

    return 0;
}