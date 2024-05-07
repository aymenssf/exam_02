#include <unistd.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
        if(!s1 || !s2)
                return NULL;
        while(*s1)
        {
                int j = 0;
                while(s2[j])
                {
                        if(*s1 == s2[j])
                                return((char *)s1);
                        j++;
                }
                s1++;
        }
        return NULL;
}

int main()
{
        printf("%s\n", ft_strpbrk("afffd", "d"));
        printf("%s", strpbrk("afffd", "d"));
}