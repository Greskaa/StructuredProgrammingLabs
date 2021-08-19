#include <stdio.h>
#include <stdlib.h>

int countOfEvenDigits(int num)
{
    if (num==0)
        return 0;

    if ((num%10)%2==0)
        return 1 + countOfEvenDigits(num/10);
    else
        return countOfEvenDigits(num/10);
}

void readNumbers(int n)
{
    if (n==0)
        return 0;

    int number;
    scanf("%d", &number);
    printf ("%d\n", countOfEvenDigits(number));

    readNumbers(n-1);
}

int main()
{
    int n;
    scanf("%d", &n);
    readNumbers(n);

    return 0;
}
