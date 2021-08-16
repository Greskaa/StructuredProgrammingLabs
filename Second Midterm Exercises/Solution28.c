#include <stdio.h>

int main()
{
    int n, m, i, j;
    scanf("%d", &n);
    scanf("%d", &m);
    int a[100][100];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int minSum=10000;
    int position;
    for (i = 0; i < m; i++)
    {
        int sum=0;
        for (j = 0; j < n; j++)
        {
            sum = sum + a[j][i];
        }
        if (sum < minSum)
        {
            minSum = sum;
            position = i;
        }
    }
    printf ("%d", position);
    return 0;
}
