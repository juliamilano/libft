#include "libft.h"

char *ft_strnstr(const char	*haystack, const char *needle, size_t len)
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
	while (len > 0)
	{
		if (tmp[i+j] != needle[j] && tmp[i] != '\0')
		    i++;
		else if(tmp[i+j] == needle[j])
		{
		    if(ft_memcmpf(tmp+i, needle, len) == 0)
		        return (lens2 <= len) ? tmp+i : "(null)";
		}
		len--;
	}
	return "(null)";
}