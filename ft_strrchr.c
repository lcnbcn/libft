/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 20:54:55 by lucida-s          #+#    #+#             */
/*   Updated: 2022/10/21 19:44:50 by lucida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i > 0)
	{
		if ((char)c == s[i])
			return ((char *)&s[i]);
		i--;
	}
	if ((char)c == s[i])
		return ((char *)&s[i]);
	return (0);
}
/*
int main() 
{

	  char *str = "supercalicragilisticoespialidoso";
	  int ch = 'g';

	  printf("%s", ft_strrchr(str, ch));

	  return (0);
}*/
