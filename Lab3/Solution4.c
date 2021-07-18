#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, current, previous, difference;
    float coefficient;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m);
        int arithmetic=1, geometric=1;
        if (m==1 || m==2)
            printf ("BOTH ARITHMETIC AND GEOMETRIC PROGRESSION\n");
        else
        {
            scanf("%d %d", &previous, &current);
            difference = previous - current;
            coefficient = (float)previous/current;
            previous = current;

            for (int i=2; i < m; i++)
            {
                scanf("%d", &current);
                if (previous - current != difference)
                    arithmetic = 0;
                if ((float)previous/current != coefficient)
                    geometric = 0;

                previous = current;
            }
            if (arithmetic && geometric)
                printf ("BOTH ARITHMETIC AND GEOMETRIC PROGRESSION\n");
            else if (arithmetic)
                printf ("ARITHMETIC PROGRESSION\n");
            else if (geometric)
                printf ("GEOMETRIC PROGRESSION\n");
            else
                printf ("THE SEQUENCE IS NOT A PROGRESSION\n");
        }
    }

    return 0;
}
