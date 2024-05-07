#include <unistd.h>

int is_space(char c)
{
    if(c == ' ' || c == '\t' || c == '\0' || (c >= 9 && c<= 13))
        return 1;
    return 0;
}

void capitalize(char *s)
{
    int i = 0;

    while(is_space(s[i]))
        i++;
    while(s[i] == '\0')
        i++;
    i = 0;
    while(s[i])
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
        if(is_space(s[i - 1]) && (s[i] >= 'a' && s[i] <= 'z'))
            s[i] -= 32;
        write(1, &s[i], 1);
            i++;
    }
}

int main(int ac, char **av)
{
    if(ac != 1)
    {
        int i = 1;
        while(i < ac)
        {
            capitalize(av[i]);
            i++;
        }
    }
    write(1, "\n", 1);
}