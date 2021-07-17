#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, digit, n, total=0;
    scanf("%d", &number);
    scanf("%d", &digit);
    scanf("%d", &n);
    for (int i=number; i > 0; i--)
    {
        int temp = i;
        int counter=0;
        while (temp != 0)
        {
            if ((temp%10) == digit)
            {
                counter++;
            }
            temp = temp/10;
        }
        if (counter==n)
        {
            printf ("%d\n", i);
            total++;
            if (total == 10)
                break;
        }
    }
    return 0;
}
