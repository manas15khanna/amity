#include <stdio.h>

int main()
{
    int i, j, k, n=3, m=3, a[n][m], b[n][m], c[n][m];
    printf("Input the number of rows and columns:\n");
    scanf("%d %d",&n, &m);

    printf("Give first matrix =");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Give second matrix =");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
        c[i][j]=0;
            for (k = 0; k < m; k++)
            {
                c[i][j] +=a[i][k] * b[k][j];
            }
        }
    }
     for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("[%d] ",c[i][j]);
        }
        printf("\n");
    }
}
