/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:53:27 by lucida-s          #+#    #+#             */
/*   Updated: 2022/10/13 18:04:37 by lucida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	cnt;
	char	*cdst;
	char	*csrc;
	
	len = ft_strlen(src);
	cdst = (char *)dst;
	csrc = (char *)src;
	cnt = 0;
	if (!src && !dst)
		return (0);
	while (cnt < len)
	{
		cdst[cnt] = csrc[cnt];
		cnt++;
	}
	return (dst);
}

int	main(void)
{
	const char	dst[20] = "destino";
	const char	src[20] = "fuente";
	size_t	nb;

	nb = 20;
	printf("\nEsta funcion copia n bytes de src para dst. \
			\nResultado: %s\n\n", ft_memmove((void*)dst, (const void *)src, nb));
	return (0);
}
