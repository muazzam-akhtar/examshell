#include <unistd.h>
#include <stdio.h>

int ft_strlen(const char *str)
{
    int count = 0;

    while (str[count])
        count++;
    return count;
}

void    ft_putstr(int fd, const char *str)
{
    write(fd, str, ft_strlen(str));
}

void    ft_putendl(int fd, const char *str)
{
    ft_putstr(fd, str);
    write(fd, "\n", 1);
}

int ft_strcmp(const char *s1, const char *s2)
{
    int i = 0;

    if (ft_strlen(s1) > ft_strlen(s2))
    {
        while (i < ft_strlen(s2))
        {
            if (s1[i] - s2[i] != 0)
                return (s1[i] - s2[i]);
            i++;
        }
    }
    else
    {
        while (i < ft_strlen(s1))
        {
            if (s1[i] - s2[i] != 0)
                return (s1[i] - s2[i]);
            i++;
        }
    }
    return (0);
}

void    ft_swap(char **a, char **b)
{
    char    *tmp = *a;

    *a = *b;
    *b = tmp;
}

char    **sort_args(int argc, char **argv)
{
    int i = 1;

    while (i < argc - 1)
    {
        if (ft_strcmp(argv[i], argv[i + 1]) > 0)
        {
            ft_swap(&argv[i], &argv[i + 1]);
            i = 0;
        }
        i++;
    }
    return argv;
}

int main(int argc, char **argv)
{
    if (argc == 1)
        return (0);
    if (argc > 2)
    {
        char    **ret = sort_args(argc, argv);
        int i = 1;
        while (i < argc)
        {
            ft_putendl(1, ret[i]);
            i++;
        }
    }
    else
        ft_putendl(1, argv[1]);
    return (0);
}