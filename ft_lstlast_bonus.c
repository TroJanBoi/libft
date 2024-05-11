/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 22:31:31 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/02/24 22:31:31 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// void    ft_lstadd_front(t_list **lst, t_list *new)
// {
//     if (!lst || !new)
//         return ;
//     new->next = *lst;
//     *lst = new;
// }

// int main()
// {
//     t_list *first = malloc(sizeof(t_list));
//     t_list *second = malloc(sizeof(t_list));
//     t_list *third = malloc(sizeof(t_list));
//     t_list *head = NULL;

//     first->content = "Peerapol";
//     first->next = NULL;

//     ft_lstadd_front(&head, first);

//     second->content = "Boat";
//     second->next = NULL;

//     ft_lstadd_front(&head, second);

//     third->content = "Srisawat";
//     third->next = NULL;

//     ft_lstadd_front(&head, third);
//     t_list *node = ft_lstlast(head);
//     printf("node : %s\n", (char *)node->content);

//     t_list *node_head = head;
//     while (head != (void *)0)
//     {
//         printf("|%s|\n", (char *)node_head->content);
//         node_head = node_head->next;
//     }
// }