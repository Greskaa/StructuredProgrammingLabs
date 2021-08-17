#include <stdio.h>
#include <stdlib.h>

void printTriangle(int n)
{
    for (int i=1; i<=n; i++)
    {
        for (int j=1; j<=n; j++)
        {
            if (i>=j)
            {
            if (i==1 || i==n || j==1 || i==j)
                printf ("%d", j);
            else
                printf ("%d", j);
            }
            else
                printf (" ");
        }
        printf ("\n");
    }
}

int main()
{
    int number;
    scanf("%d", &number);
    printTriangle(number);

    return 0;
}
