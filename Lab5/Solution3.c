#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int digitsCount (int number)
{
    int counter=0;
    while (number>0)
    {
        counter++;
        number = number / 10;
    }
    return counter;
}

int getHalfOf (int number, char part)
{
    int divisor = digitsCount(number)/2;
    int left = 0, right = 0;

    if (digitsCount(number)%2==0)
    {
            left = (int)number / (pow(10,divisor));
            right = number % (int)(pow(10,divisor));
    }
    else
    {
            left = (int)number / (pow(10,divisor));
            right = number % (int)(pow(10,divisor));
    }

    if (part == 'R')
        return right;
    else
        return left;
}
void printInRange (int a, int b, char part)
{
    for (a; a<=b; a++)
    {
        if (getHalfOf(a, part) % digitsCount(a) == 0)
            printf ("%d\n", a);
    }
}

int main()
{
    int start, finish;
    scanf("%d %d", &start, &finish);

    printf ("LEFT PART TEST:\n");
    printInRange(start, finish, 'L');
    printf ("RIGHT PART TEST:\n");
    printInRange(start, finish, 'R');

    return 0;
}
