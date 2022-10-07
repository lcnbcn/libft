/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:35:08 by lucida-s          #+#    #+#             */
/*   Updated: 2022/10/07 12:54:53 by lucida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*
int	main(void)
{
	// testear ft_isalpha

	int	ch;

	ch = '1';

	printf("\nEsta funcion retorna 1 si es un caracter, 0 si no.\n\nResultado: %i\n\n", ft_isalpha(ch));
}*/
