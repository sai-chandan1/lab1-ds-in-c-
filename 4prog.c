#include <stdio.h>
int main()                                           /*length of string*/
{
    char str[100];
    int count = 0;

    printf("enter the string ");
    scanf("%[^\n]s", str);

    while (str[count] != '\0')
    {
        count++;
    }
    printf("length of string is %d", count);
}