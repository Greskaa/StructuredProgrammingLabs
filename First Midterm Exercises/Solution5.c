#include <stdio.h>
#include <stdlib.h>

int main()
{
    int date1, day1, month1, year1;
    int date2, day2, month2, year2;
    int n, i, conversion1, conversion2;
    scanf ("%d", &date1);
    scanf ("%d", &n);
    
    //divide entered date into DD MM YYYY
    day1 = (date1 % 100000000)/1000000;
    month1 = (date1 % 1000000)/10000;
    year1 = date1 % 10000;
    
    conversion1 = year1 * 365 + month1 * 12 + day1;
    
    for (i = 1; i <= n; i++)
    {
        scanf ("%d", &date2);
        //divide entered date into DD MM YYYY
        day2 = (date2 % 100000000)/1000000;
        month2 = (date2 % 1000000)/10000;
        year2 = date2 % 10000;
        
        conversion2 = year2 * 365 + month2 * 12 + day2;
        
        if (conversion1 - conversion2 >= 6570)
            printf ("YES\n");
        else
            printf("NO\n");
    }
    
    
    return 0;
}
