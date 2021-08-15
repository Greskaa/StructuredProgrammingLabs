#include <stdio.h>
#include <stdlib.h>

int allEvenNumbers (int a[], int n)
{
    for (int i=0; i<n; i++)
    {
        if (a[i] % 2)
            return 0;
    }

    return 1;
}

int main()
{
    int n;
    int even;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i<n; i++)
        scanf("%d", &a[i]);

    if (allEvenNumbers(a, n))
        printf ("YES");
    else
        printf ("NO");

    return 0;
}
