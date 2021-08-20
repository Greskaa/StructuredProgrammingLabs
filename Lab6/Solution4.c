#include <stdio.h>
#include <stdlib.h>

int AscendingDigits(int number)
{
    if (number<10)
        return 1;
    if ((number%10) < ((number/10)%10))
        return AscendingDigits(number/10);
    else
        return 0;
}
int main()
{
    int n, number;
    scanf("%d", &n);
    for (int i=0; i<n; i++)
    {
        scanf("%d", &number);
        printf ("%d\n", AscendingDigits(number));
    }
    return 0;
}
