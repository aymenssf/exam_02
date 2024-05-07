#include <stdlib.h>

char **ft_split(char *str)
{
    int i = 0;
    int k = 0;
    int j;
    char **split;
    if(!(split = (char **)malloc(sizeof(char *) * 256)))
        return NULL;
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++;
    while(str[i])
    {
        j = 0;
        if(!(split[k] = (char *)malloc(sizeof(char ) * 4096)))
            return NULL;
        while(str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i])
            split[k][j++] = str[i++];
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++;
        split[k][j] = '\0';
        k++;
    }
    split[k] = NULL;
    return split;
}
#include <stdio.h>
int main()
{
    char *str = "aymen assaf    21y.o";
    char **sstr = ft_split(str);
    printf("%s\n", sstr[0]);
    printf("%s\n", sstr[1]);
    printf("%s\n", sstr[2]);
}