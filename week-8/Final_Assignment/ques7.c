#include <stdio.h>
int main()
{
    int m, n, a[100][100], b[100][100], sum[100][100], i, j;
    scanf("%d", &m);
    scanf("%d", &n);

    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of 2nd matrix:\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    // adding two matrices
    for (i = 0; i < m; ++i)
    {
        for (j = 0; j < n; ++j)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    // printing the result
    printf("\nSum of two matrices: \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d   ", sum[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}
