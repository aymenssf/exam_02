#include <unistd.h>
void putchar(char c)
{
    write(1, &c, 1);
}
int main(int ac, char **av)
{
    if(ac == 3)
    {
        int i = 0;
        int j = 0;
        while(av[2][i])
        {
            if(av[1][j] == av[2][i])
                j++;
            i++;
        }
        if(av[1][j] == '\0')
            write(1, "1", 1);
        else
            write(1, "0", 1);
    }
    write(1, "\n", 1);
}