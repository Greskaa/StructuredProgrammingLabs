#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    scanf("%d",&number);
    int seconds = number % 60;
    int minutes = (number/60)%60;
    int hours = (number/3600);
    printf ("%.2d:%.2d:%.2d", hours, minutes, seconds);

    return 0;
}
