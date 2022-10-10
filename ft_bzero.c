/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:42:28 by lucida-s          #+#    #+#             */
/*   Updated: 2022/10/10 13:29:43 by lucida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	size;

	size = 0;
	while (size < n)
	{
		((unsigned char *)s)[size] = '\0';
		size++;
	}
}
/*
int	main(void)
{
	//testear ft_memset

	char	str[8];
	size_t	nbr;
	char	*res;

	nbr = 4;
	res = (char *)ft_bzero(str, nbr);

	printf("\nEsta funcion rellana de zeros la srting asignada.\
	\n\nResultado: %s\n\n", res);

	return (0);
}*/
