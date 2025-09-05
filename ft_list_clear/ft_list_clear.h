#ifndef FT_LIST_CLEAR_H
#define FT_LIST_CLEAR_H

# include <stdlib.h>

typedef struct s_list
{
    void            *data;
    struct s_list   *next;
} t_list;

void ft_list_clear(t_list **list, void (*free_fct)(void *));

#endif