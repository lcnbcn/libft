/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 16:02:24 by lucida-s          #+#    #+#             */
/*   Updated: 2022/11/02 19:42:43 by lucida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;

	s3 = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) +1);
	if (!s1 || !s2 || !s3)
		return (0);
	ft_strlcpy(s3, s1, (size_t)s3);
	ft_strlcat(s3, s2, (size_t)s3);
	return (s3);
}
