#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	cnt;

	cnt = 0;
	while (cnt < len)
	{
		((unsigned char *)b)[cnt] = c;
		cnt++;
	}
	return (b);
}

int	main(void)
{
	// testear ft_memset

	char	buffer[8];
	int	ch;
	int	len;
	char	*res;

	ch = 'x';
	len = 4;
	res = ft_memset(buffer, ch, len);
	printf("\nEsta funcion retorna su primer argumento.\n\nResultado: %s\n\n", res);
}
