#include "libft.h"

char *ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;
	int lens2;
    char *tmp;
    
    tmp = (char *)haystack;
    if (needle[0] == '\0')
    	return (tmp);
	lens2 = ft_strlen((char *)needle);
	i = 0;
	j = 0;
	while (tmp[i] != needle[j] && tmp[i] != '\0')
		i++;
	while (tmp[i+j] == needle[j] && tmp[i] != '\0')
	{
		lens2--;
		j++;
		i++;
	}
	if(lens2 == 0 && j > 0 || lens2 == 1 && j > 0)
	    return (tmp + i - j);
return "(null)";
}