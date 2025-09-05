#include "ft_list_clear.h"

void ft_list_clear(t_list **list, void (*free_fct)(void *))
{
    t_list  *current;
    t_list  *next;

    if (*list)
    {
        while (current != NULL)
        {
            next = current->next;
            if (free_fct != NULL)
                free_fct(current->data);
            free(current);
            current = next;
        }
        *list = NULL;
    }
}