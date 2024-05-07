#include "unistd.h"

int ft_strlen(char *str)
{
        int i = 0;
        while(str[i])
                i++;
        return i;
}
int main(int ac , char **av)
{
        int len = 0; 
        if(ac == 2)
        {
                len = ft_strlen(av[1]) -1;
                while(len >= 0)
                {
                        write(1, &av[1][len], 1);
                        len--;
                }
                av[1][len] = '\0';
        }
        write(1, "\n", 1);
}
