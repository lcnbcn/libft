/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 11:20:13 by lucida-s          #+#    #+#             */
/*   Updated: 2022/10/10 13:01:36 by lucida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	cnt;

	cnt = 0;
	while (cnt < len)
	{
		((unsigned char *)b)[cnt] = c;
		cnt++;
	}
	return (b);
}
/*
int	main(void)
{
	char	buffer[8];
	int	ch;
	size_t	len;
	char	*res;
	
	ch = 'b';
	len = 4;
	res = ft_memset(buffer, ch,len);

	printf("\nEsta funcion retorna su primer argumento.\n\nResultado: %s\n\n", res);

	return (0);
}*/
