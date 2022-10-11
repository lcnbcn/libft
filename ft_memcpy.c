/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:06:00 by lucida-s          #+#    #+#             */
/*   Updated: 2022/10/11 14:45:46 by lucida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	cnt;
	char	*cdst;
	char	*csrc;

	cdst = (char *)dst;
	csrc = (char *)src;
	cnt = 0;

	if (!src && !dst)
		return (0);

	while (cnt < n)
	{
		cdst[cnt] = csrc[cnt];
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
