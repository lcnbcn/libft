#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
				{
				return (1);
				}
	return (0);
	}



int	main(void)
{
	// testear ft_isalpha

	int	ch;

	ch = 'B';

	printf("\nEsta funcion retorna 1 si es un caracter, 0 si no.\n\nResultado: %i\n\n", ft_isalpha(ch));
}
