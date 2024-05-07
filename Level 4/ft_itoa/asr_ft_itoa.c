#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int nbr) 
{
    if(nbr == -2147483648)
        return ("-2147483648\n");
    int len = 0;
    int n = nbr;
    int i = 0;

    while(n)
    {
        n /= 10;
        len++;
    }
    if(n <= 0)
        len++;
    char *res = (char *) malloc(sizeof(char) * len + 1);
    res[len] = '\0';
    if(nbr < 0)
    {
        res[0] = '-';
        nbr = -nbr;
    }
    if(nbr == 0)
    {
        res[0] = '0';
        return res;
    }
    while(nbr)
    {
        res[len--] = nbr % 10 + '0';
        nbr /= 10;
    }
    return (res);
}

int main()
{
    int nbr = -42;
    char *str = ft_itoa(nbr);
    int i = 0;
    while(i < 4)
    {
        printf("%c", str[i]);
        i++;
    }
}