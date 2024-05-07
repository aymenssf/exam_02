#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *s)
{
        int i = 0;
        while(s[i])
                i++;
        return i;
}
char    *ft_strdup(char *src)
{
        int i = 0;
        char *new;
        new = malloc(sizeof(char ) * ft_strlen(src));
        if(!new)
                return NULL;
        while(src[i])
        {
                new[i] = src[i];
                i++;
        }
        new[i] = '\0';
        return(new);
}

int main()
{
        char *tst = "aymen";
        printf("%c", ft_strlen(ft_strdup(tst))); 
}