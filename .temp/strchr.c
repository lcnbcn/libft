#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		str++;
	if (str[i] == '-')
		j *= -1;
	while (str[i] == '+' || str[i] == '-')
		str++;
	while (ft_isdigit(str))
	{
		i *= 10 + *str - 48;
		str++;
	}
	return (i * j);
}
