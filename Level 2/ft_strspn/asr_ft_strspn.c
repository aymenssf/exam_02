#include <unistd.h>

char *ft_strchr(const char *s, int c)
{
        while(*s)
        {
                if(*s == c)
                        return (char *)s;
                s++;
        }
        return NULL;
}
size_t	ft_strspn(const char *s, const char *accept)
{
        size_t i = 0;
        while(s[i])
        {
                if(ft_strchr(accept, s[i]) == 0)
                        break;
                i++;
        }
        return (i);
}

int main()
{
        char s[] = "cen";
        char acc[] = "aymxn";
        printf("%lu\n", ft_strspn(s, acc));
        printf("%lu", strspn(s, acc));
}