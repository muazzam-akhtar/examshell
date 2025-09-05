#ifndef FT_LIST_PUSH_FRONT_H
#define FT_LIST_PUSH_FRONT_H

# include <stdlib.h>

typedef struct s_list
{
    void            *data;
    struct s_list   *next;
} t_list;

void ft_list_push_front(t_list **begin_list, void *data);

#endif