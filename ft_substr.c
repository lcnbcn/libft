/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 20:09:41 by lucida-s          #+#    #+#             */
/*   Updated: 2022/12/10 21:25:06 by lucida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (start >= ft_strlen(str))
		start = ft_strlen(str);
	if (ft_strlen(str) - start < len)
		len = ft_strlen(str) - start;
	sub = (char *)malloc(len + 1);
	if (sub != 0)
	{
		i = 0;
		while (i < len)
		{
			sub[i] = str[start];
			i++;
			start++;
		}
		sub[i] = '\0';
		return (sub);
	}
	return (0);
}
