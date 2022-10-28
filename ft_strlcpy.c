/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 10:30:04 by lucida-s          #+#    #+#             */
/*   Updated: 2022/10/28 10:35:01 by lucida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	sl;

	i = -1;
	sl = ft_strlen(src);
	if (size != 0)
	{
		while (src[++i] != '\0' && i < size - 1)
			dst[i] = src[i];
		dst[i] = '\0';
	}
	return (sl);
}
