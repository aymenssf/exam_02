#include <unistd.h>

int ft_atoi(char *str)
{
        int res = 0;

        while(*str)
        {
                res = res * 10 + *str - '0';
                str++;
        }
        return(res);
}
void putnbr(int nb)
{
        if(nb >= 10)
                putnbr(nb / 10);
        char nbr = nb % 10 + '0';
        write(1, &nbr, 1);
}
int is_prime(int nb)
{
        int i = 2;
        if(nb <= 1)
                return 0;
        while(i * i <= nb)
        {
                if(nb % i == 0)
                        return 0;
                i++;
        }
        return 1;
}
int main(int ac, char **av)
{
        if(ac == 2)
        {
                int nb = ft_atoi(av[1]);
                int sum = 0;
                while(nb > 0)
                {
                        if(is_prime(nb))
                                sum += nb;
                        nb--;
                }
                putnbr(sum);
        }
        if(ac == 1)
                write(1, "0", 1);
        write(1, "\n", 1);
        return 0;
}