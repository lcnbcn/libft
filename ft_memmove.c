/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:53:27 by lucida-s          #+#    #+#             */
/*   Updated: 2022/10/19 20:00:26 by lucida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	cnt;

	cnt = 0;
	if (!dst && !src)
	{
		return (0);
	}
	if (dst < src)
	{
		while (cnt < len)
		{
			((unsigned char *)dst)[cnt] = ((unsigned char *)src)[cnt];
			cnt++;
		}
		return (dst);
	}
	else
	{
		return (ft_memcpy(dst, src, len));
	}
}


int	main(void)
{
	const char	dst[12] = "12345678";
	const char	dst2[12] = "12345678";
	size_t	nb;

	nb = 4;

	printf("\nMemcpy copia n bytes de src para dst. \
			\nResultado: %s\n\n", ft_memmove((void*)dst +2, (const void *)dst, nb));
	printf("\nMemcpy copia n bytes de src para dst. \
			\nResultado: %s\n\n", memmove((void*)dst2 +2, (const void *)dst2, nb));
	return (0);
}
