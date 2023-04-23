#include <stdio.h>

int main()
{
    char string[100];
    printf("enter the string : ");
    scanf("%[^\n]s", string);
    for (int i = 0; string[i] != '\0'; i++)
    {
        printf("the %dth letter of string is : %c\n", i + 1, string[i]);
    }
}