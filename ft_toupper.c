/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 22:36:31 by lucida-s          #+#    #+#             */
/*   Updated: 2022/10/07 14:41:46 by lucida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c -= 32;
		return (c);
	}
	return (c);
}
/*
int	main(void)
{
	// testear ft_toupper

	int	ch  ='2';


	printf("\nEsta funcion retorna un caracter en mayuscula en caso que esta sea minuscula.\n\nResultado: %c\n\n", ft_toupper(ch));
}*/
