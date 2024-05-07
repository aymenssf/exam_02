#include <unistd.h>

int main(int ac, char **av)
{
        if(ac == 3)
        {
                int i = 0;
                int arr[256] = {0};
                while(av[1][i])
                {
                        if((int)arr[av[1][i]] == 0)
                        {
                                arr[av[1][i]] = 1;
                                write(1, &av[1][i], 1);
                        }
                        i++;
                        
                }
                int j = 0;
                while(av[2][j])
                {
                        if(arr[(int)av[2][j]] == 0)
                        {
                                arr[(int)av[2][j]] = 1;
                                write(1, &av[2][j], 1);
                        }
                        j++;
                      
                }
        }
        write(1, "\n", 1);
}