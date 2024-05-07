#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_putnbr(int nb)
{
    if(nb < 0)
    {
        ft_putchar('-');
        nb = -nb;
    }
    if(nb <= 9)
        ft_putchar(nb + 48);
    else
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
}
int check_hex(int c, int len_base)
{
    char *lhex = "0123456789abcdef";
    char *uhex = "0123456789ABCDEF";
    while(--len_base)
    {
        if(c == lhex[len_base] || c == uhex[len_base])
            return 1;
    }
    return 0;
}
int	ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int res = 0;
    int sign = 1;
    while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if(str[i] == '-')
        sign = -1;
    if(str[i] == '+' || str[i] == '-')
        i++;
    while(str[i] && check_hex(str[i], str_base))
    {
        res *= str_base;
        if(str[i] >= 'a' && str[i] <= 'f')
            res = res + str[i] - 'a' + 10;
        else if(str[i] >= 'A' && str[i] <= 'F')
            res = res + str[i] - 'A' + 10;
        else if(str[i] >= '0' && str[i] <= '9')
            res = res + str[i] - '0';
        i++;
    }
    return (res * sign);
}

int main()
{
    printf("%d", ft_atoi_base("h", 16));
}