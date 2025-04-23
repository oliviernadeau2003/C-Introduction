#include <stdio.h>

int main()
{
    int p = 0, i, nbr;
    for (nbr = 0; nbr < 100; nbr++)
    {
        for (i = 1; i <= nbr; i++)
            //                                                                                                                                 nbr % i ?: p++;
            if (nbr % i == 0)
                p++;
        //                                                                                                                                    p == 2 ? printf(" %d est un nombre premier.\n", nbr) : 0;
        if (p == 2)
            printf(" %d est un nombre premier.\n", nbr);
        p = 0;
    }

    p == 2 ? 1 : 0;
}