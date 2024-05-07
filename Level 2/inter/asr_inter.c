#include <unistd.h>
int main(int ac, char **av)
{
        if(ac == 3)
        {
                int i = 0;
                int arr[256] = {0};
                while(av[1][i])
                {
                        int j = 0;
                        while(av[2][j])
                        {
                                if(av[1][i] == av[2][j])
                                {
                                        if(arr[(int)av[1][i]] == 0)
                                        {
                                                arr[(int)av[1][i]] = 1;
                                                write(1, &av[1][i], 1);
                                        }
                                }
                                j++;
                        }
                        i++;
                }
        }
        printf("\n");
}