#include <stdio.h>
#include <stdlib.h>

int main()
{
    int start, finish;
    scanf("%d", &start); scanf("%d", &finish);
    for (start; start <= finish; start++)
    {
        int temp = start;
        while (temp)
        {
            if ((temp % 10) % 2 != 0)
            {
                 break;
            }   
            temp = temp / 10;
        }
        if (temp == 0)
        {
            printf ("%d", start);
            break;
        }
    }
        if (start > finish)
            printf ("NSN");
    return 0;
}
