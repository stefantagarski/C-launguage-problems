#include <stdio.h>
int main()
{
    int i, j;
    int n, m;
    int x, y;
    int matrix[100][100];
    int sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    scanf("%d %d", &x, &y);

    for (i = 0; i < x; i++)
    {
        for (j = y; j < m; j++)
        {
            sum1 += matrix[i][j];
        }
    }

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            sum2 += matrix[i][j];
        }
    }

    for (i = x; i < n; i++)
    {
        for (j = 0; j < y; j++)
        {
            sum3 += matrix[i][j];
        }
    }

    for (i = x; i < n; i++)
    {
        for (j = y; j < m; j++)
        {
            sum4 += matrix[i][j];
        }
    }
printf ("%d %d %d %d",sum1,sum2,sum3,sum4);

    return 0;
}
