/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 19:03:48 by lucida-s          #+#    #+#             */
/*   Updated: 2022/10/28 10:39:58 by lucida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	sl;
	size_t	dl;
	size_t	i;
	size_t	j;

	sl = ft_strlen(src);
	dl = ft_strlen(dst);
	i = 0;
	j = 0;
	if (size > dl)
	{
		j = sl + dl;
	}
	else
	{
		j = size + sl;
	}
	while (src[i] && dl + 1 < size)
	{
		dst[dl] = src[i];
		dl++;
		i++;
	}
	dst[dl] = '\0';
	return (j);
}
