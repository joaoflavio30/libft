/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardoso <jcardoso@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:06:51 by jcardoso          #+#    #+#             */
/*   Updated: 2024/10/08 14:06:51 by jcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*node;

	if (!lst || !f || !del)
		return (NULL);
	new_list = ft_lstnew(f(lst->content));
	lst = lst->next;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!new_list)
			ft_lstclear(&new_list, del);
		ft_lstadd_back(&new_list, node);
		lst = lst->next;
	}
	return (new_list);
}
