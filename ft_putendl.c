/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 18:31:47 by lucida-s          #+#    #+#             */
/*   Updated: 2022/11/08 18:58:43 by lucida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd);
{
	int	i;

	i = -1;
	while (s[++i] != '\0')
		write(fd, &s[i], 1)
	
			[i] = '\n'
}


int	main(void)
{
	ft_putendl_fd("hola", 4)
}
