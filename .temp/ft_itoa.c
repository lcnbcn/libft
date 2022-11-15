/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:56:07 by lucida-s          #+#    #+#             */
/*   Updated: 2022/11/14 12:28:13 by lucida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len(long nb)
{
	size_t	i;

	i = 0;
	if (nb == 0)
	{
		i++;
		return (i);
	}
	if (nb < 0)
	{
		nb *= -1;
		i++;
	}
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*s;
	size_t	len;
	long	nb;

	nb = n;
	len = ft_len(nb);
	s = (char *)malloc((char) * len + 1);
	if (!s)
		return (0);
	s[len--] = '\0';
	if (nb == 0)
		s[0] = 48;
	if (nb < 0)
	{
		s[0] = 45;
		nb *= -1;
	}
	while (nb > 0)
	{
		s[len] = (nb % 10) + +48;
		nb /= 10;
		len--;
	}
	return (s);
}
