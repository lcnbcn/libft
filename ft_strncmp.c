/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:52:47 by lucida-s          #+#    #+#             */
/*   Updated: 2022/10/06 17:55:07 by lucida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

/*int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	size_str1;
	int	size_str2;

	size_str1 = ft_strlen(s1);
	size_str2 = ft_strlen(s2);
	return (0);
}*/

int	main(void)
{
	char	*str_1;
	char	*str_2;
	size_t	n;

	n = 3;
	str_1 = "HEllo";
	str_2 = "hello";
	printf("el resultado de la comparacion es: %d\n\n", strncmp(str_1, str_2, n));
}
