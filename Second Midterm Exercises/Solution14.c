#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int max=-10000, min=10000;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (j>i)
            {
                if (a[i][j] > max)
                max = a[i][j];
            }
            if (i>j)
            {
                if (a[i][j] < min)
                min = a[i][j];
            }
        }
    }
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (i>j)
                printf ("%d ", min);
            else if (j>i)
                printf ("%d ", max);
            else
                printf ("%d ", a[i][j]);
        }
        printf ("\n");
    }
    return 0;
}
