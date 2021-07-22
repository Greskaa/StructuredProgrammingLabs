#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, product, firstDigit, lastDigit;
    int sum, counter=0, number;
    scanf("%d", &a);
    scanf("%d", &b);
    for (a; a < b; a++)
    {
        number = a;
        product = 1;
        sum = 0;
        lastDigit = number % 10;
        number = number / 10;
        while (number >= 10)
        {
            product = product * (number%10);
            number = number / 10;
        }
        firstDigit = number;
        sum = firstDigit*10 + lastDigit;
        if ((product % sum == 0) && (product != 0))
        {
            counter++;
            printf ("%d -> (%d == %d * %d)\n", a, product, sum, product/sum);
        }
    }
    printf ("%d", counter);
    
    return 0;
}
