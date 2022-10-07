/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 22:55:14 by lucida-s          #+#    #+#             */
/*   Updated: 2022/10/07 13:09:29 by lucida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	// testear ft_isdigit

	int dig;

	dig ='7';

	printf("\nEsta funcion retorna 1 si es un digito, 0 si no.\n\nResultado: %i\n\n", ft_isdigit(dig));
}*/
