/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 22:27:47 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/02/24 22:27:47 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	del_memmory(void *content)
// {
// 	free(content);
// }

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	(del)(lst->content);
	free(lst);
}

// int main()
// {
//     t_list *first = malloc(sizeof(t_list));
//     t_list *second = malloc(sizeof(t_list));
//     t_list *third = malloc(sizeof(t_list));
//     t_list *head = NULL;

//     first->content = "Peerapol";
//     first->next = NULL;

//     second->content = "Boat";
//     second->next = NULL;

//     third->content = "Srisawat";
//     third->next = NULL;

//     ft_lstadd_front(&head, first);
//     ft_lstadd_front(&head, second);
//     ft_lstadd_front(&head, third);

//     t_list *node = head;
//     while (node != (void *) 0)
//     {
//         printf("|%s|\n", node->content);
//         node = node->next;
//     }

//     printf("\nAfter deletion:\n");
//     node = head;
//     ft_lstdelone(node, &del_memmory);
//     while (node != '\0')
//     {
//         printf("|%s|\n", node->content);
//         node = node->next;
//     }
//     printf("|%s|\n",node->content);
//     return (0);
// }