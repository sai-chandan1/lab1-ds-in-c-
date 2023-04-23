#include <stdio.h>
int main() /*multiplication of two matrix*/
{
    int a[10][9], b[10][9], c[10][9];
    int c1, r1, c2, r2, k, i, j;
    printf("enter no.of rows for 1st matrix ");
    scanf("%d", &r1);
    printf("enter no.of column for 1st matrix ");
    scanf("%d", &c1);
    printf("enter no.of rows for 2nd matrix ");
    scanf("%d", &r2);
    printf("enter no.of column for 2nd matrix ");
    scanf("%d", &c2);
    if (c1 != r2)
        printf("multiplication cannot be performed");
    else
    {
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                printf("enter the element of %dth row and %dth column of 1st matrix : ", i + 1, j + 1);
                scanf("%d", &a[i][j]);
                printf("\n");
            }
        }
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("enter the element of %dth row and %dth column of 2nd matrix : ", i + 1, j + 1);
                scanf("%d", &b[i][j]);
                printf("\n");
            }
        }
        printf("multiplication of two matrix is\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                c[i][j] = 0;
                for (k = 0; k < r2; k++)
                {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    }
}