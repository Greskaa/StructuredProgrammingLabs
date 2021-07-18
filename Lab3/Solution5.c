      #include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, num1, num2, counter=0;
    float pm1=0, pm2=0;
    int flag=0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &num1, &num2);
        if (num1!=-1 && num2!=-1)
        {
            flag=1;
            counter++;
            pm1 = pm1 + num1;
            pm2 = pm2 + num2;
        }
    }
    float mean1, mean2;
    if (flag)
    {
        mean1 = (float)pm1/counter;
        mean2 = (float)pm2/counter;
        printf("PM10: %.2f\nPM2.5: %.2f", mean1, mean2);
    }
    else
        printf ("PM10: Can not be calculated\nPM2.5: Can not be calculated");

    return 0;
}
