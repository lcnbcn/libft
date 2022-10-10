/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 23:25:19 by lucida-s          #+#    #+#             */
/*   Updated: 2022/10/10 12:59:45 by lucida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c += 32;
		return (c);
	}
	return (c);
}
/*
int	main(void)
{
	// testear ft_tolower

	int	ch  ='Z';


	printf("\nEsta funcion retorna un caracter en minuscula en \
	caso que esta sea mayuscula.\
	\n\nResultado: %c\n\n", ft_tolower(ch));
}*/	
