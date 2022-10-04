/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 20:54:55 by lucida-s          #+#    #+#             */
/*   Updated: 2022/10/04 21:16:26 by lucida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	ch;
	int		size;

	size = ft_strlen(s);

	ch = (char)c;
	while (*s <= size && *s != 0)
		s--;
	if (*s == ch)
		return ((char *)s);
	return (0);
}
