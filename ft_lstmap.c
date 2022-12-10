/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucida-s <lucida-s@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 17:09:09 by lucida-s          #+#    #+#             */
/*   Updated: 2022/12/10 18:16:23 by lucida-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*elem;
	t_list	*temp;

	if (!lst)
		return (0);
	new_lst = 0;
	while (lst)
	{
		temp = f(lst->content);
		elem = ft_lstnew(temp);
		if (!elem)
		{
			ft_lstclear(&new_lst, del);
			del(temp);
			return (0);
		}
		ft_lstadd_back(&new_lst, elem);
		lst = lst->next;
	}
	return (new_lst);
}
