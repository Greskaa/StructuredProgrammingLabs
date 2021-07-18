#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100], n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int temp[100], counter=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            a[i] = a[i] + 1;
            temp[counter++] = a[i];
        }
        else
        {
            a[i] = a[i] - 1;
            temp[counter++] = a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf ("%d ", temp[i]);
    }
    return 0;
}
