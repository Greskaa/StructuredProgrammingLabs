#include <stdio.h>
#include <stdlib.h>

int Ascending(int n, int a[])
{
    static int i=0;
    if (i==n-1)
        return 1;

    if (a[i] >= a[i+1])
        return 0;

    ++i;

    return Ascending(n, a);
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
    if (Ascending(n, a))
        printf ("YES");
    else
        printf ("NO");

    return 0;
}
