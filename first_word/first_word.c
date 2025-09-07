#include <unistd.h>

int ft_isspace(int c)
{
    if (c >= 9 && c <= 13)
        return 1;
    else if (c == ' ')
        return 1;
    return (0);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 0;

        while (argv[1][i] && ft_isspace(argv[1][i]))
            i++;
        if (argv[1][i])
        {
            while (argv[1][i] && !ft_isspace(argv[1][i]))
            {
                write(1, &argv[1][i], 1);
                i++;
            }
        }
    }
    write(1, "\n", 1);
    return (0);
}