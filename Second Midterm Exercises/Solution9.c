#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Odd(int a[], int n)
{
    if (!n)
        return 0;
    else
        return fabs(a[n-1]%2) + Odd(a, n-1);
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i=0; i< n; i++)
        scanf("%d", &a[i]);

    printf ("%d", Odd(a, n));
    return 0;
