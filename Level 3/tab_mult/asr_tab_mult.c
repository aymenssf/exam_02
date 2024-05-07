#include <unistd.h>

int ft_atoi(char *str)
{
    int i = 0;
    int res = 0;
    int sign = 1;

    while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if(str[i] == '-' || str[i] == '+')
        i++;
    if(str[i] == '-')
        sign = -1;
    while(str[i])
    {
        res = res * 10 + str[i] - '0';
        i++;
    }
    return(res * sign);
}

void put_char(char c)
{
    write(1, &c, 1);
}
void put_nbr(int nb)
{
    if(nb == -2147483648)
    {
        write(1, "-", 1);
        write(1, "2", 1);
        put_nbr(147483648);
    }
    else if(nb >= 0 && nb <= 9)
    {
        put_char(nb + '0');
    }
    else if(nb < 0)
    {
        write(1, "-", 1);
        put_nbr(nb * - 1);
    }
    else
    {
        put_nbr(nb / 10);
        put_nbr(nb % 10);
    }
}
int main(int ac, char **av)
{
    if(ac == 2)
    {
        int i = 1;
        while(i < 10)
        {
            put_nbr(i);
            write(1, " x ", 3);
            put_nbr(ft_atoi(av[1]));
            write(1, " = ", 3);
            put_nbr(ft_atoi(av[1]) * i);
            write(1, "\n", 1);
            i++;
        }
    }
}
