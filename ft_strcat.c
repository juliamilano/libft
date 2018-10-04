#include "libft.h"

char *ft_strcat(char * destptr, const char *srcptr)
{
    int i;
    int j;

    i = ft_strlen((char*)destptr);
    j = 0;
    while (srcptr[j] != '\0')
    {
        destptr[i + j] = srcptr[j];
        j++;
    }
    destptr[i + j] = '\0';
    return (destptr);
}