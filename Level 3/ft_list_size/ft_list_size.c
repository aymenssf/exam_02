#include "ft_list.h"
#include <unistd.h>

int	ft_list_size(t_list *begin_list)
{
	if (begin_list == 0)
		return (0);
	else
		return (1 + ft_list_size(begin_list->next));
}
int main()
{
    t_list *list = (t_list *)malloc(sizeof(t_list));
    list->data = "s";
    list->next = NULL;
    printf("%d", ft_list_size(list));
}