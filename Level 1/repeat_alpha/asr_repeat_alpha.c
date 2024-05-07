#include "unistd.h"

int main(int ac, char **av)
{
        int i, rep;
        i = 0;
        if(ac == 2)
        {
                while(av[1][i])
                {
                        if(av[1][i] >= 'a' && av[1][i] <= 'z')
                                rep += av[1][i + 1] - 'a';
                        else if(av[1][i] >= 'A' && av[1][i] <= 'Z')
                                rep += av[1][i + 1] - 'A';
                        while(rep)
                        {
                                write(1, &av[1][i], 1);
                                rep--;
                        }
                }
        }
        write(1, "\n", 1);
}