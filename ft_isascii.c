/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 21:21:59 by lucida-s          #+#    #+#             */
/*   Updated: 2022/10/10 12:50:21 by lucida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	// testear ft_isascii

	int asc;

	asc  ='+';

	printf("\nEsta funcion retorna 1 si pertene a la tabla ASCII, 0 si no.\
	\n\nResultado: %i\n\n", ft_isascii(asc));
}*/
