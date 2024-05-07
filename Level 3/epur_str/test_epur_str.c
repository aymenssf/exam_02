#include <unistd.h>

int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i = 0;
        while(av[1][i] == ' ' || av[1][i] == '\t')
            i++;
        int sp = 0;
        while(av[1][i])
        {
            if(av[1][i] == ' ' || av[1][i] == '\t')
            {
                sp = 1;
            }
            if(av[1][i] != ' ' && av[1][i] != '\t')
            {
                if(sp)
                    write(1, " ", 1);
                write(1, &av[1][i], 1);
                sp = 0;
            }
            i++;
        }
    }
    write(1, "\n", 1);
}