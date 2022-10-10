/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 12:31:52 by lucida-s          #+#    #+#             */
/*   Updated: 2022/10/10 12:47:26 by lucida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	// testear ft_isalnum

	int alphan;

	alphan ='7';

	printf("\nEsta funcion retorna 1 si es un alphanumerico, 0 si no. \ 
	\n\nResultado: %i\n\n", ft_isalnum(alphan));
}*/
