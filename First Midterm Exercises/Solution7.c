#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, max=0, counter, maxNumber;
    scanf("%d", &number);
    for (--number; number > 0; number--)
    {
        counter=0;
        for (int i = 1; i < number; i++)
        {
            if (number % i == 0)
                counter = counter + i;
        }
        if (counter > max)
            {
                max = counter;
                maxNumber = number;
            }
    }
    printf ("%d", maxNumber);

    return 0;
}
