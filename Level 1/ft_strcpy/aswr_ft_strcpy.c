#include "unistd.h"
int ft_strlen(char *str)
{
        int i = 0;
        while(str[i])
                i++;
        return(i);
}
char    *ft_strcpy(char *s1, char *s2)
{
        int i = 0;
        while(s2[i])
        {
                s1[i] = s2[i];
                i++;
        }
        s1[i] = '\0';
        return(s1);
}

int main()
{
        char s1[11] = "";
        char s2[10] = "";
        printf("%s", strcpy(s1, s2));
}