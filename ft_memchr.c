#include "libft.h"

void	*ft_memchr(const void *s1, int c, size_t n)
{
    unsigned char *tmp;
    size_t i;
    unsigned char	d;

	d = (unsigned char)c;
    if (!s1)
		return (NULL);

    tmp = (unsigned char *)s1;
	i = 0;
	while(tmp[i] != '\0' && i < n - 1)
	{
	    if(tmp[i] == d &&  n != 0)
	        return (unsigned char *)s1 + i;
	    i++;
	}
	return (NULL);
}
