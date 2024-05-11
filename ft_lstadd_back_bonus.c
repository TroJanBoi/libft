/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 19:28:39 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/02/24 19:28:39 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst || !new)
		return ;
	if (*lst == (void *)0)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}

// int main()
// {
//     t_list *first = malloc(sizeof(t_list));
//     t_list *second = malloc(sizeof(t_list));
//     t_list *head = NULL;

//     first->content = "Peerapol";
//     first->next = NULL;

//     second->content = "Srisawat";
//     second->next = NULL;

//     ft_lstadd_back(&head, first);
//     ft_lstadd_back(&head, second);

//     t_list *cur = head;
//     while (!head)
//     {
//         printf("|%s|\n", cur->content);
//         cur = cur->next;
//     }
// }