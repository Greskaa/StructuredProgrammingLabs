#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, importantDigits, d1, d2, d3, d4, d5, d6;
    scanf("%d", &number);
    importantDigits = number / 1000000;
    d6 = (number/100000)%10;
    d5 = (number/10000)%10;
    d4 = (number/1000)%10;
    d3 = (number/100)%10;
    d2 = (number/10)%10;
    d1 = number % 10;
    if (importantDigits==70 || importantDigits==71 || importantDigits==72)
        printf ("0%d/%d%d%d-%d%d%d T-mobile", importantDigits, d6, d5, d4, d3, d2, d1);
    else if (importantDigits==75 || importantDigits==76 || importantDigits==77 || importantDigits==78)
        printf ("0%d/%d%d%d-%d%d%d A1", importantDigits, d6, d5, d4, d3, d2, d1);
    else if (importantDigits==79)
        printf ("0%d/%d%d%d-%d%d%d LycaMobile", importantDigits, d6, d5, d4, d3, d2, d1);
    return 0;
}
