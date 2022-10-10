/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:02:21 by lucida-s          #+#    #+#             */
/*   Updated: 2022/10/10 12:56:30 by lucida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}
/*
int	main(void)
{
	// testear ft_strlen

	char	*str = "Esta string contiene 35  carecteres ";


	printf("\nEsta funcion retorna un intero que indica la longitud de una string.\
	\n\nResultado: %zu\n\n", ft_strlen(str));
}*/
