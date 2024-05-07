#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int i = 0;

    if(start > end)
        i = start - end;
    if(start < end)
        i = end - start;
    int *arr = malloc((sizeof(int) * i) + 1);
    if(!arr)
        return NULL;
    int j = 0;
    while (j <= i)
    {
        if(start <= end)
        {
            arr[j] = end;
            end--;
        }
        else if(start >= end)
        {
            arr[j] = end;
            end++;
        }
        j++;
    }
    return arr;
}
int main()
{
    int *str = ft_range(1,3);
    printf("%d\n", str[0]);
    printf("%d\n", str[1]);
    printf("%d\n", str[2]);
    printf("%d", str[3]);
}