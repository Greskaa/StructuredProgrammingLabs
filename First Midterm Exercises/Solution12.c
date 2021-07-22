#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, num1, num2;
    int lastDigit;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &num1, &num2);
        if (num1>10 && num2>10)
        {
            int temp = num1;
            lastDigit = temp % 10;
            temp = temp / 10;
            int power = 1;
            while (num1 >= 10)
            {
                num1 = num1/10;
                power = power * 10;
            }
            int newNum = (lastDigit * power) + temp;
            if (newNum > num2)
                printf ("YES\n");
            else 
                printf ("NO\n");
        }
        else
            printf ("NO\n"); 
    }
    return 0;
}
