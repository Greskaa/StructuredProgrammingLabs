#include <stdio.h>
#include <stdlib.h>

void Triangle(int number)
{
    if (number)
    {
        for (int i=1; i<=number; i++)
            printf ("%d ", i);

        printf ("\n");
    }
    if (number)
        Triangle(number-1);
}

int main()
{
    int n;
    scanf("%d", &n);
    Triangle(n);
}
