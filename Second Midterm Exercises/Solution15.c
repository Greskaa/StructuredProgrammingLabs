#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[100][100];
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int counter=0;
    //check main diagonal
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if(i==j && a[i][j]!=0)
                counter++;
        }
    }
    //check
    for (int i=0; i<n; i++)
    {
        for (int j=i; j<n; j++)
        {
            if (a[i][j] != a[j][i])
                counter++;
        }
    }
    printf ("%d", counter);

    return 0;
}
