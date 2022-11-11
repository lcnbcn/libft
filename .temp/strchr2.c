#include "libft.h"

size_t	*ft_strlcpy(char *dst, const char *src, size_t sizedst)
{
	size_t	i;

	i = -1;
	if (sizedst != 0)
	{
		while (src[++i] != '\0' && i < sizedst -1)
			dst[i] = src[i];
		dst[i] = '\0';
	}
	return (0);
}
