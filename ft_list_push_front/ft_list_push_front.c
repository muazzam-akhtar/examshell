#include "ft_list_push_front.h"

void ft_list_push_front(t_list **begin_list, void *data)
{
    t_list  *tmp = malloc(sizeof(t_list));
    if (!tmp)
        return ;
    tmp->data = data;
    tmp->next = *begin_list;
    *begin_list = tmp;
}
