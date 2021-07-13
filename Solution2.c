#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    scanf("%d",&number);

    printf ("%d x %d\n", number/5000, 5000);
    number = number % 5000;
    printf ("%d x %d\n", number/1000, 1000);
    number = number % 1000;
    printf ("%d x %d\n", number/500, 500);
    number = number % 500;
    printf ("%d x %d\n", number/100, 100);
    number = number % 100;
    printf ("%d x %d\n", number/50, 50);
    number = number % 50;
    printf ("%d x %d\n", number/10, 10);
    number = number % 10;
    printf ("%d x %d\n", number/5, 5);
    number = number % 5;
    printf ("%d x %d\n", number/2, 2);
    number = number % 2;
    printf ("%d x %d\n", number/1, 1);
    number = number % 1;

    return 0;
}
