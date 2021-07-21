#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, counter, flipped=0;
    scanf("%d", &number);
    
    if (number <= 9)
       printf ("The number is invalid");
    else    
    {
    for (--number; number > 0; number--)
        {
            int temp = number;
            counter = 0;
            flipped = 0;
            while (temp != 0)
            {
                counter++;
                flipped = flipped * 10 + (temp%10);
                temp = temp / 10;
            }
            if (flipped % counter == 0)
                {
                    printf ("%d", number);
                    break;
                }
        }
    }
    return 0;
}
