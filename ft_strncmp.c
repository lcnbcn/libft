/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:52:47 by lucida-s          #+#    #+#             */
/*   Updated: 2022/10/07 07:31:10 by lucida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int        ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t    i;
    size_t    j;

    i = ft_strlen(s1);
    j = ft_strlen(s2);
    while (s1[--i] == s2[--j] && i >= 0 && j >= 0)
    {
        n--;
        if (n == 0)
            return (0);
    }
    return ((unsigned char)(s1[i]) - (unsigned char)(s2[j]));
}
/*nt	main(void)
{
	
	printf("el resultado de la comparacion es: %d\n\n", ft_strncmp("T", "t", 15));
}*/
