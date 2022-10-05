/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 20:54:55 by lucida-s          #+#    #+#             */
/*   Updated: 2022/10/05 08:21:02 by lucida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		size;
	const char	*ini;
	char		ch;

	ch = (char)c;
	ini = s;
	size = ft_strlen(s);
	s = (s + size);
	while (*s != *ini && ch != *s)
		s--;
	if (ch == *s)
		return ((char *)s);
	return (0);
}
