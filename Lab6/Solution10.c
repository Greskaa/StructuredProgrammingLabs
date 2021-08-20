#include <stdio.h>
#include <stdlib.h>

void Triangle(int number)
{
    if (number)
        Triangle(number-1);
    if (number)
    {
        for (int i=1; i<=number; i++)
            printf ("%d ", i);

        printf ("\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    Triangle(n);
}
