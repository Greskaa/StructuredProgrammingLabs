#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, counter=0;
    int flipped, sum, first, last;
    scanf("%d %d", &a, &b);
    for (a; a <= b; a++)
    {
        int number = a;
        flipped = 0;
        sum = 0;
        last = number % 10;
        number = number / 10;
        while (number >= 10)
        {
            flipped = flipped*10 + (number%10);
            number = number / 10;
        }
        if (a > 0 && a < 100)
            flipped == 0;
        
        first = number;
        sum = first+last;
        if (flipped % sum == 0)
        {
            if (flipped == 0)
                continue;
            else
            {
                printf ("%d -> (%d == (%d + %d) * %d)\n", a, flipped, last, first, flipped/sum);
                counter++;
            }
        }
    }
    printf ("%d", counter);
    return 0;
}
