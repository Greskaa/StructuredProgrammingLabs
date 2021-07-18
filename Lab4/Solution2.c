#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100], n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i]%2==0)
            a[i] = a[i]+1;
        else
            a[i] = a[i]-1;
    }
    for (int i = 0;i < n; i++)
    {
        printf ("%d ", a[i]);
    }
    return 0;
}
