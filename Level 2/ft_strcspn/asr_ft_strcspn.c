#include <unistd.h>
size_t	ft_strcspn(const char *s, const char *reject)
{
        size_t i = 0;
        while(s[i])
        {
                size_t j = 0;
                while(reject[j])
                {
                        if(s[i] == reject[j])
                                return i;
                        j++;
                }
                i++;
        }
        return i;
}

int main()
{
        printf("%lu\n", strcspn("aymen", "n"));
        printf("%lu", ft_strcspn("aymen", "e"));
}