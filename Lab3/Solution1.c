#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, number, num=0;
    scanf("%d", &n);
    int temp[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d", &number);
        if (number>=10 && number<=99 && number%2==0)
            temp[num++] = number;
    }
    for (int i=0; i<num; i++)
    {
        printf ("%d\n", temp[i]);
    }
    return 0;
}
