#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, num1, num2, counter=0, totalCounter=0;
    float percentage;

    scanf("%d", &n);
    scanf ("%d", &num1); scanf("%d", &num2);
    while (num1!=0 || num2!=0)
    {
            if (num1 + num2 == n)
                counter++;
                
            scanf ("%d", &num1); scanf("%d", &num2);
            totalCounter++;
    }
        percentage = counter*100.0/(totalCounter);
        printf ("You entered %d pair of numbers whose sum is %d\n", counter, n);
        printf ("The percentage of pairs with sum %d is %.2f%%", n, percentage);

    return 0;
}
