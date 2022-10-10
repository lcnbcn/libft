/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:06:00 by lucida-s          #+#    #+#             */
/*   Updated: 2022/10/10 16:47:50 by lucida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, void *restrict src, size_t n)
{

}

int	main(void)
{
	const char	dst[20] = "destino";
	const char	src[20] = "fuente";
	size_t	nb;

	nb = 20;

	printf("\n%s\n\n", ft_memcpy((void*)dst, (void *)src, nb));
	return (0);
}
