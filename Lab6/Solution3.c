#include <stdio.h>
#include <stdlib.h>

void printForm(int num)
{
    if (num==0)
        return 0;
    else
    {
        char c;
        if (num%2)
            c='*';
        else
            c='#';

        for (int i=1; i<=num; i++)
        {
            printf ("%c", c);
        }
        printf ("\n");
    }

    return printForm(num-1);
}

int main()
{
    int n;
    scanf("%d", &n);
    printForm(n);

    return 0;
}
