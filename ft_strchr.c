/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 16:46:42 by lucida-s          #+#    #+#             */
/*   Updated: 2022/10/07 15:09:10 by lucida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;

	ch = (char)c;
	while (*s != '\0' && ch != *s)
		s++;
	if (*s == ch)
		return ((char *)s);
	return (0);
}
/*
int	main(void)
{
	// testear ft_strchr

	char	*str = "Hello, hello";
	int	ch = 'o';


	printf("\nEsta funcion retorna un puntero al carácter encontrado en la string, o puntero nulo si no se encuentra dicho carácter.\n\nResultado: %s\n\n", ft_strchr(str, ch));
}*/
