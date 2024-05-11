/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 22:27:59 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/02/24 22:27:59 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

// int main()
// {
//     t_list *lst = malloc(sizeof(t_list));

//     lst->content = "Peerapol";
//     lst->next = NULL;

//     t_list *new = NULL;
//     ft_lstadd_front(&new, lst);

//     t_list *nd = malloc(sizeof(t_list));

//     nd->content = "Srisawat";
//     nd->next = NULL;

//     ft_lstadd_front(&new, nd);

//     t_list *cur = new;
//     while (new != (void *)0)
//     {
//         printf("%s\n", (char *)cur->content);
//         cur = cur->next;
//     }
// }