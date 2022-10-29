/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 20:38:45 by lucida-s          #+#    #+#             */
/*   Updated: 2022/10/29 21:00:09 by lucida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dst;
	size_t	size;
	size_t	i;

	size = ft_strlen(src);
	dst = malloc(size + 1);
	if (!dst)
		return (0);
	i = -1;
	while (++i < size)
		dst[i] = src[i];
	dst[i] = '\0';
	return (dst);
}
