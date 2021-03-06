#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if(*s1 == '\0' && *s2 == '\0')
		return (0);
	while(*s1 == *s2 && (int)n > 1)
	{
		*s1++;
		*s2++;
		n--;
	}
	return (*s1 - *s2);
}