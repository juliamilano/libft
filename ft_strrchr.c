#include "libft.h"

char *ft_strrchr(const char *str, int ch)
{
    char *tmp;
    int i;
    
    tmp = NULL;
	i = 0;
	while(str[i] != '\0')
	{
	    if(str[i] == ch)
	        tmp = (char *)str + i;
	    i++;
	}
	return tmp;
}