/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:06:00 by lucida-s          #+#    #+#             */
/*   Updated: 2022/10/19 16:34:27 by lucida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	cnt;

	cnt = 0;
	if (!src && !dst)
		return (0);
	while (cnt < n)
	{
		((unsigned char *)dst)[cnt] = ((unsigned char *)src)[cnt];
		cnt++;
	}
	return (dst);
}
/*
int	main(void)
{
	const char	dst[20] = "destino";
	const char	src[20] = "fuente";
	size_t	nb;

	nb = 20;

	printf("\nEsta funcion copia n bytes de src para dst. \
			\nResultado: %s\n\n", ft_memcpy((void*)dst, (void *)src, nb));
	return (0);
}*/
