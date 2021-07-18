#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100], n, k;
    scanf("%d", &n);
    int temp[100];
    int counter=0;
    for (int i=0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);
    for (int i=0; i < n; i++)
    {
        if (a[i] < k)
            temp[counter++] = a[i];
    }
    for (int i=0; i < n; i++)
    {
        if (a[i] >= k)
            temp[counter++] = a[i];
    }
    for (int i=0; i < n; i++)
    {
        printf ("%d ", temp[i]);
    }

    return 0;
}
