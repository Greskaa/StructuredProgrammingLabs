#include <stdio.h>
#include <stdlib.h>

int countEvenDigits(int num)
{
    if (!num)
        return 0;
    if (num%2==0)
        return 1 + countEvenDigits(num/10);
    else
        return countEvenDigits(num/10);
}

void readNumbers(int n)
{
    int number;
    if (!n)
        return 0;
    scanf("%d", &number);
    printf ("%d\n", countEvenDigits(number));
    return readNumbers(n-1);
}

int main()
{
    int n;
    scanf("%d", &n);
    readNumbers(n);

    return 0;
}
