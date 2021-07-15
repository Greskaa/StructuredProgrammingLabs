#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, grade;
    float points, maxPoints, result;
    scanf("%d", &n);
    for (int i=0; i<n; i++)
    {
        scanf("%f %f", &points, &maxPoints);
        result = (points/maxPoints) * 100.0;
        if (result>=50 && result<60)
            grade = 6;
        else if (result>=60 && result<70)
            grade = 7;
        else if (result>=70 && result<80)
            grade = 8;
        else if (result>=80 && result<90)
            grade = 9;
        else if (result>=90 && result<100)
            grade = 10;
            
        if (result < 50)    
            printf ("%.2f FAIL\n", result);
        else 
            printf ("%.2f %d\n", result, grade);

            
    }
    return 0;
}
