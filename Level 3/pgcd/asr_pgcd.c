#include <stdio.h>

int main(int ac, char **av)
{
    if(ac == 3)
    {
        int i = 0;
        int nbr1 = atoi(av[1]);
        int nbr2 = atoi(av[2]);
        if(ac == 3)
        {
            if(nbr1 > 0 && nbr2 > 0)
            {
                while(nbr1 != nbr2)
                {
                    if(nbr1 > nbr2)
                        nbr1 -= nbr2;
                    else
                        nbr2 -= nbr1; 
                }
                printf("%d", nbr1);
            }
        }
        printf("\n");
    }
}