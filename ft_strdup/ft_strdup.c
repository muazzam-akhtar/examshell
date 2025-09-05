#include <stdlib.h>

int ft_strlen(const char *str)
{
    int count = 0;

    while (str[count])
        count++;
    return (count);
}

char *ft_strdup(const char *s1)
{
    if (!s1)
        return NULL;
    char    *dup = malloc(sizeof(char) * (ft_strlen(s1) + 1));
    if (!dup)
        return NULL;
    int i = 0;
    while (s1[i])
    {
        dup[i] = s1[i];
        i++;
    }
    dup[i] = 0;
    return (dup);
}