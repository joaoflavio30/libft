/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcardoso <jcardoso@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:20:39 by jcardoso          #+#    #+#             */
/*   Updated: 2024/10/07 18:20:39 by jcardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
#include <stdio.h>
int main()
{
    t_list *node;
    t_list *node2;
    t_list *node3;
    t_list *node4;

    node = malloc(sizeof(t_list *));
    node2 = malloc(sizeof(t_list *));
    node3 = malloc(sizeof(t_list *));
    node4 = malloc(sizeof(t_list *));

    int *valor = malloc(sizeof(int));
    int *valor2 = malloc(sizeof(int));
    int *valor3 = malloc(sizeof(int));
    int *valor4 = malloc(sizeof(int));

    *valor = 1;
    *valor2 = 2;
    *valor3 = 3;
    *valor4 = 4;


    node->content =  valor;
    node2->content = valor2;
    node3->content = valor3;
    node4->content = valor4;

    node->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = NULL;

    t_list *last_node = ft_lstlast(node);

    printf("%d\n",  *((int *)last_node->content));
    return (0);
}*/
