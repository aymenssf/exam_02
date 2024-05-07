#include <unistd.h>


int is_space(char c)
{
    if(c == ' ' || c == '\t')
        return 1;
    return 0;
}
int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i = 0;
        while(is_space(av[1][i]))
            i++;
        int sp = 0;
        while(av[1][i])
        {
            if(is_space(av[1][i]))
                sp = 1;
            if(!is_space(av[1][i]))
            {
                if(sp)
                    write(1, " ", 1);
                sp = 0;
                write(1, &av[1][i], 1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
}