#include "libft.h"

int		ft_atoi(const char *str)
{
    int i;
    int neg;
    int sum;
    
    neg = 1;
    i = 0;
    sum = 0;
    while (str[i] != '\0' && (str[i] >= 8 && str[i] <= 13 || str[i] == 32))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            neg = -1;
        i++;
    }
    while (str[i] >= 48 && str[i] <= 57)
    {
        sum = sum * 10 + (str[i] - 48);
        i++;
    }
    if (neg < 0)
        sum *= -1;
    return sum;
}
