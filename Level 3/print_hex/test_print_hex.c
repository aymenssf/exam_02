#include <unistd.h>
int ft_atoi(char *s)
{
    int i = 0;
    int res = 0;
    while(s[i])
    {
        res = res * 10 + s[i] - '0';
        i++;
    }
    return res;
}
void print_hex(int nb)
{
    char *hex = "0123456789abcdef";
    char res = 0;
    if(nb >= 16)
        print_hex(nb / 16);
    res = hex[nb % 16];
    write(1, &res, 1);
}
int main(int ac, char **av)
{
    if(ac == 2)
    {
        int nb = ft_atoi(av[1]);
        print_hex(nb);
    }
    write(1, "\n",1 );
}