#include <unistd.h>

int ft_isalpha(int c)
{
    if (c >= 'a' && c <= 'z')
        return 1;
    else if (c >= 'A' && c <= 'Z')
        return 1;
    return (0);
}

char getAlphaMirror(int c)
{
    if (c >= 'a' && c <= 'z')
    {
        if (c < 'n')
            return ('z' - (c - 'a'));
        else if (c > 'n')
            return ('a' + 'z' - c);
    }
    else if (c >= 'A' && c <= 'Z')
    {
        if (c < 'N')
            return ('Z' - (c - 'A'));
        else if (c > 'N')
            return ('A' + 'Z' - c);
    }
    return c;
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int i = 0;

        while (argv[1][i])
        {
            int c = argv[1][i];
            if (ft_isalpha(argv[1][i]))
                c = getAlphaMirror(argv[1][i]);
            write(1, &c, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}