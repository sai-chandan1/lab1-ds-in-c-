#include <stdio.h>
                                         /*compare two string*/
int main()
{
    char str1[100];
    char str2[100];
    int i = 0;
    int c = 0;

    printf("enter the 1st string to compare: ");
    scanf("%[^\n]s", str1);
    printf("enter the 2nd string to compare: ");
    scanf(" %[^\n]s", str2);

    while (str1[i] != '\0')
    {
        if (str1[i] != str2[i])
        {
            c = 1;
            break;
        }
        i++;
    }
    if (c == 1)
        printf("different string");
    else
        printf("same string");

    return 0;
}
