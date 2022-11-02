/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 20:09:41 by lucida-s          #+#    #+#             */
/*   Updated: 2022/11/02 15:47:55 by lucida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ss;
	size_t	size;

	if (!s)
		return (0);
	size = ft_strlen(s);
	if (start >= size)
	{
		ss = (char *)malloc(1);
		if (!ss)
			return (0);
		ft_bzero((void *)ss, 1);
		return (ss);
	}
	else
	{
		ss = (char *)malloc(len + 1);
		if (!ss)
			return (0);
	}
	s = (s + (char const)start);
	ft_memcpy(ss, s, len + 1);
	ss[len] = '\0';
	return (ss);
}
