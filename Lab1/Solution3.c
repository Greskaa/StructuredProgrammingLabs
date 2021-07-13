#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mass, height;
    scanf("%f", &mass);
    scanf("%f", &height);
    height = height/100;
    height = height * height;
    printf ("%.2f", mass/height);
    return 0;
}
