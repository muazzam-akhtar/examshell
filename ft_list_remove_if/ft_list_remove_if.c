#include "ft_list_remove_if.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
    t_list  *current = *begin_list;
    t_list  *prev = NULL;

    if (begin_list == NULL || *begin_list == NULL)
        return ;
    while (current)
    {
        if (cmp(current->data, data_ref) == 0)
        {
            if (!prev)
            {
                *begin_list = current->next;
                free_fct(current->data);
                free(current);
                current = *begin_list;
            }
            else
            {
                prev->next = current->next;
                free_fct(current->data);
                free(current);
                current = prev->next;
            }
        }
        else
        {
            prev = current;
            current = current->next;
        }
    }
}