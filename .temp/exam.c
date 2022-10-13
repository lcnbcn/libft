/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exam.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 22:09:39 by lucida-s          #+#    #+#             */
/*   Updated: 2022/10/13 11:23:54 by lucida-s         ###   ########.fr       */
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
		
		
int	main(void)
{
	//testear ft_memset

	char	buffer[8];
	int	ch;
	size_t	len;
	char	*res;

	ch = 'b';
	len = 4;
	res = ft_memset(buffer, ch,len);

	printf("\nEsta funcion retorna su primer argumento.\n\nResultado: %s\n\n", res);

	return (0);
}
