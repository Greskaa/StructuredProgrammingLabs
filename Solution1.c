#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d, e;
    float average;
    printf ("Enter 5 numbers: "); scanf ("%d%d%d%d%d",&a, &b, &c, &d, &e);
    average = (a + b + c + d + e) / 5.0;
    printf ("%.2f", average);

    return 0;
}
