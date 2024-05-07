#include <stdlib.h>

char	*ft_itoa(int nbr)
{
    int n = nbr;
    int len = 0;
    while (n)
    {
        n /= 10;
        len++;
    }
    if(nbr <= 0)
        len++;
    
    char *str = (char *)malloc(sizeof(char) * len + 1);
    if(!str)
        return NULL;
    str[len] = '\0';
    if(nbr == 0)
    {
        str[0] = '0';
        return str;
    }
    if(nbr < 0)
    {
        str[0] = '-';
        nbr = -nbr;
    }
    while(nbr)
    { 
        str[--len] = nbr % 10 + '0';
        nbr /= 10;
    }
    return str;
}

int main()
{
    printf("%s", ft_itoa(-55));
}