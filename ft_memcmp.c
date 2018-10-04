#include "libft.h"

int		ft_memcmp(const char *s1, const char *s2, size_t n)
{
    	
        size_t			i;
        unsigned char	*str1;
	    unsigned char	*str2;
	    
        str1 = (unsigned char*) s1;
	    str2 = (unsigned char*) s2;
    	if (s1[0] == '\0' && s2[0] == '\0' || n == 0)
    	    return (0);
    	i = 0;
    	while (str1[i] == str2[i] && str1[i] && n > i)
    	    i++;
    	if(!(n == i))
    	    return (str1[i] - str2[i]);
        return (str1[i - 1] - str2[i - 1]);
}