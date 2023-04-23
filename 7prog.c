#include <stdio.h>

int main()
{
    char str1[100];
    char str2[100];
    char str[100];
    int i = 0;
    int j = 0;

    printf("enter the 1st string to compare: ");
    scanf("%[^\n]s", str1);
    printf("enter the 2nd string to compare: ");
    scanf(" %[^\n]s", str2);

    while (str1[i] != '\0')
    {
        str[i] = str1[i];
        i++;
    }
    while (str2[j] != '\0')
    {
        str[i] = str2[j];
        i++;
        j++;
    }
    str[i] = '\0';
    printf("after joining two string we get %s", str);

    return 0;
}
