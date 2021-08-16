#include <stdio.h>
#include <stdlib.h>

int Numbers (int num1, int num2, int digit)
{
    int temp1=num1, temp2=num2;
    int counter1=0, counter2=0;
    int d1, d2;
    int total1=0, total2=0;
    while (num1 != 0)
    {
        d1 = num1 % 10;
        counter1++;
        if ((counter1%2==0) && (digit == d1))
            total1++;

        num1 = num1 / 10;
    }
    while (num2 != 0)
    {
        d2 = num2 % 10;
        counter2++;
        if ((counter2%2==0) && (digit == d2))
            total2++;

        num2 = num2 / 10;
    }
    int max;
    if (total1 > total2)
        max = temp1;
    else if (total2 > total1)
        max = temp2;
    else 
        max = temp1;

    return max;
}

int main()
{
    int a, b, c;
    while (scanf("%d %d %d", &a, &b, &c)==3)
    {
        printf ("%d\n", Numbers(a, b, c));
    }


    return 0;
}
