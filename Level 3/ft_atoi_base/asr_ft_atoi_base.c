#include <unistd.h>

int is_space(char c)
{
    if(c == ' ' || (c >= 9 && c <= 13))
        return 1;
    return 0;
}

int check_valid(int c, int baselen)
{
    char *lbase = "0123456789acbdef";
    char *ubase = "0123456789ABCDEF";
    int i = 0;
    while(i < baselen)
    {
        if(c == lbase[i] || c == ubase[i])
            return 1;
        i++;
    }
    return 0;
}
int	ft_atoi_base(const char *str, int str_base)
{
    int res = 0;
    int sign = 1;
    int i = 0;
    
    while(is_space(str[i]))
        i++;
    if(str[i] == '+' || str[i] == '-')
        i++;
    if(str[i] == '-')
        sign = -1;
    while(str[i] && check_valid(str[i], str_base))
    {
        res *= str_base;
        if(str[i] >= '0' && str[i] <= '9')
            res = res + str[i] - '0';
        else if(str[i] >= 'a' && str[i] <= 'z')
            res = res + str[i] - 'a' + 10;
        else if(str[i] >= 'A' && str[i] <= 'Z')
            res = res + str[i] - 'A' + 10;
        i++;
    }
    return(res * sign);
}

int main()
{
	printf("%d", ft_atoi_base("h", 16));
}