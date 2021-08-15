#include <stdio.h>
#include <stdlib.h>

int allOddNumbers(int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        if (a[i] % 2 == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    if (allOddNumbers(a, n))
        printf ("YES");
    else
        printf ("NO");

    return 0;
}
