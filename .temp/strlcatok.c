#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	sl;
	size_t	dl;
	size_t	i;
	size_t	j;

	sl = ft_strlen(src);
	dl = ft_strlen(dst);
	i = 0;
	j = 0;
	if (size > dl)
	{
		j = sl + dl;
	}
	else
	{
		j = size + sl;
	}
	while (src[i] && dl + 1 < size)
	{
		dst[dl] = src[i];
		dl++;
		i++;
	}
	dst[dl] = '\0';
	return (j);
}
