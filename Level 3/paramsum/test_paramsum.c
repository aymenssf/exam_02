#include <unistd.h>
void ft_putnbr(int nb)
{
    char res;
    if(nb <= 9)
    {
        res = nb + '0';
        write(1, &res, 1);
    }
    else
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
}
int main(int ac, char **av)
{
    (void)av;
    int i = 0;
    if(ac == 1)
    {
        write(1, "0", 1);
        write(1, "\n",1);
    }
    else
    {
        while(i < ac - 1)
        {
            i++;
        }
        ft_putnbr(i);

    }
}