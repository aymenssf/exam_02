#include <unistd.h>

int ft_strlen(char *s)
{
        int i = 0;
        while(s[i])
                i++;
        return(i);
}
char    *ft_strrev(char *str)
{
        int len = 0;
        len = ft_strlen(str) - 1;
        int i = 0;
        char tmp;
        while(i < len)
        {
                tmp = str[i];
                str[i] = str[len];
                str[len] = tmp;
                i++;
                len--;
        }
        return(str);
}

int main()
{
        char s[] = "aymen";
        ft_strrev(s);
        printf("%s", s);
}       