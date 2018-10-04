#include "libft.h"

char *ft_strchr(const char *str, int ch)
{
    char *tmp;
    int i;
    
    tmp = (char *)str;
	i = 0;
	while(tmp[i] != '\0' && tmp[i] != ch)
	    i++;
	if(tmp[i] == ch)
	    return ((char *)tmp+i);
	return (NULL);
}