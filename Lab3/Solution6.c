#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, odd, even, number;
    scanf("%d", &n);
    for (n; ; n++)
    {
        even=0;
        odd=0;
        number = n;
        while (number!=0)
        {
            if ((number%10)%2==0)
                even++;
            else
                odd++;

            number = number/10;
        }
        if (even == odd)
            {
                printf ("%d", n);
                break;
            }
    }
    return 0;
}
