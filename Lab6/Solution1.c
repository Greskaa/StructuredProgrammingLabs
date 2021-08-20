#include <stdio.h>
#include <stdlib.h>

int Ascending(int n, int a[])
{
    if(n < 2)
        return 1;
    else
        if (a[n-1] > a[n-2])
            return Ascending(n-1, a);
        else
            return 0;
}

int main()
{
    int a[100];
    int n;
    scanf("%d", &n);
    for (int i=0; i<n; i++)
        scanf("%d", &a[i]);

    if (Ascending(n, a))
        printf ("Array elements are ascending");
    else
        printf ("Array elements are not ascending");

    return 0;
}
