#ifndef FT_LIST_REMOVE_IF_H
#define FT_LIST_REMOVE_IF_H

# include <stdlib.h>

typedef struct s_list
{
    void            *data;
    struct s_list   *next;
} t_list;

void    ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *));

#endif