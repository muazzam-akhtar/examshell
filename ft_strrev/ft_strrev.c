#include <stdlib.h>

int ft_strlen(char *str)
{
    int count = 0;

    while (str[count])
        count++;
    return count;
}

char    *ft_strrev(char *str)
{
    if (!str)
        return (NULL);
    char    *tmp = malloc(sizeof(char) * (ft_strlen(str) + 1));
    if (!tmp)
        return NULL;
    int i = ft_strlen(str) - 1;
    int j = 0;

    while (i >= 0)
        tmp[j++] = str[i--];
    tmp[j] = 0;
    return (tmp);
}