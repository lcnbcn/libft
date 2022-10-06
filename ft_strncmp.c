/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:52:47 by lucida-s          #+#    #+#             */
/*   Updated: 2022/10/06 10:36:15 by lucida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_h"

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	main(void)
{
	char	*str_1;
	char	*str_2;
	int	n;

	n = 0;
	str_1 = "Esta string contiene 34 caracteres";
	str_2 = "Esta string contiene 37 + 1 caracteres";
	printf("el resultado de la comparacion es: %d"; ft_strncmp(str_1, str_2, n));
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	size_str1;
	int	size_str2;

	size_str1 = ft_strlen(s1);
}
