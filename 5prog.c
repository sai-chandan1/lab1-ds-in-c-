#include <stdio.h>

int main() {
    char str[100];
    char rev_str[100];
    int count = 0;

    printf("enter the string: ");
    scanf("%[^\n]s", str);

    while (str[count] != '\0') {
        count++;
    }
    printf("length of string is %d\n", count);

    for (int i = 0; i < count; i++) {
        rev_str[i] = str[count - i - 1];
    }
    rev_str[count] = '\0';  // add null character to terminate the string

    printf("reverse of string is: %s", rev_str);
    return 0;
}
