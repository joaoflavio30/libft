/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardoso <jcardoso@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:50:23 by jcardoso          #+#    #+#             */
/*   Updated: 2024/10/08 13:50:23 by jcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	if (!content)
		return (NULL);

	node = (t_list *) malloc(sizeof(t_list *));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
