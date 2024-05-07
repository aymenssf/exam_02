#include <unistd.h>

int		max(int* tab, unsigned int len)
{
        unsigned int i = 0;
        if(len == 0 || !tab)
                return 0;
        int max = 0;
        while(i < len)
        {
                if(max < tab[i])
                        max = tab[i];
                else
                      i++;  
        }
        return max;
}

int main()
{
        int tab[] = {0, 2,  3, 5, 10};
        unsigned int len = 5;
        printf("%d", max(tab, len));
}