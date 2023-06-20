#include <stdlib.h>

int ft_strlength(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

void *ft_strdup(char *src)
{
    int index;
    char *dest;
    char *d;

    index = 0;
    d = ((dest = (char *)malloc(ft_strlength(src) * sizeof(char) + 1)));
    if (!d)
    {
        return (0);
    }
    while (src[index])
    {
        dest[index] = src[index];
        index++;
    }
    dest[index] = '\0';
    return (dest);
}