#include <stdio.h>
int main()                                                        /*sum of two matrix*/
{
    int a[10][9], b[10][9], d[10][9];
    int c, r, i, j;
    printf("enter no.of rows");
    scanf("%d", &r);
    printf("enter no.of column");
    scanf("%d", &c);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("enter the element of %dth row and %dth column of 1st matrix : ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
            printf("\n");
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("enter the element of %dth row and %dth column of 2nd matrix : ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
            printf("\n");
        }
    }
    printf("sum of matrix is\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", a[i][j] + b[i][j]);
        }
        printf("\n");
    }
}