/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:56:58 by lucida-s          #+#    #+#             */
/*   Updated: 2022/10/04 21:03:53 by lucida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

int		ft_isalpha(int c);
int		ft_toupper(int c);
int		ft_isdigit(int c);
int		ft_tolower(int c);
int		ft_isalnum(int c);
size_t	ft_strlen(const char *s);
int		ft_isprint(int c);
int		ft_isascii(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
#endif
