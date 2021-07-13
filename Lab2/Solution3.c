#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number, digit, reversed=0;
    scanf("%d", &number);
    if (number >= 100 && number <= 999)
    {
        int temp = number;
        while (number != 0)
        {
            reversed = reversed*10 + (number%10);
            number = number/10;
        }
        if (temp == reversed)
            printf ("Palindrome\n");
        else
            printf ("Not palindrome");
    }
    else
    {
        printf ("Wrong input\n");
    }

    return 0;
}
