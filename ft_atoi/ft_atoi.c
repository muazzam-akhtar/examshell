#include <stdbool.h>
#include <stdlib.h>

bool    ft_isspace(int c)
{
    if (c >= 9 && c < 14)
        return true;
    else if (c == ' ')
        return true;
    return false;
}

bool    ft_isdigit(int c)
{
    return (c >= '0' && c <= '9' ? true: false);
}

int skipSpaces(const char *str)
{
    int i = 0;

    while (ft_isspace(str[i]))
        i++;
    return (i);
}

int ft_strlen(const char *str)
{
    int i = 0;

    while (str[i])
        i++;
    return i;
}

int extractNum(const char *str)
{
    int i = ft_strlen(str) - 1;
    int num = 1;
    int tmp = 0;
    int digit = 1;
    while (i >= 0)
    {
        if (i - (ft_strlen(str) - 1) == 0)
            num = str[i] - '0';
        else
        {
            tmp = (str[i] - '0') * digit;
            num += tmp;

        }
        digit *= 10;
        i--;
    }
    return (num);
}

int ft_atoi(const char *str)
{
    int num = 1;
    int len = 0;
    char    *tmp;
    if (!str)
        return (0);

    (void)num;
    int i = skipSpaces(str);
    if (str[i] != '+' && str[i] != '-' && !ft_isdigit(str[i]))
        return (0);
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            num = -1;
        i++;
    }
    if (!ft_isdigit(str[i]))
        return (0);
    while (ft_isdigit(str[i]))
    {
        len++;
        i++;
    }
    tmp = malloc(sizeof(char) * (len + 1));
    if (!tmp)
        return (0);
    int j = len - 1;
    int k = i - 1;
    tmp[len] = 0;
    while (j >= 0)
        tmp[j--] = str[k--];
    int ret = extractNum(tmp);
    if (num < 0)
        ret *= -1;
    free(tmp);
    tmp = NULL;
    return (ret);
}