#include "libft.h"

char *ft_strdup(const char *str)
{
	char	*x;
	int		i;

	i = ft_strlen((char*)str);;
	x = (char *)malloc(sizeof(*x) * (i + 1));
	if (x == 0)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		x[i] = src[i];
		i++;
	}
	x[i] = '\0';
	return (x);
}
