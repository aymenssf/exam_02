typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;
int	ft_list_size(t_list *begin_list)
{
    t_list *tmp;
    tmp = begin_list;
    if(begin_list == 0)
        return 0;
    int len = 0;
    while(tmp)
    {
        len++;
        tmp = tmp->next;
    }
    return len;
}