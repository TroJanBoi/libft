/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 22:27:34 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/02/24 22:27:34 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != (void *)0)
	{
		(f)(lst->content);
		lst = lst->next;
	}
}

// void contest(void *s)
// {
//     printf("Content : %s\n", (char *)s);
// }

// int main()
// {
//     t_list *node = malloc(sizeof(t_list));

//     node->content = "Peerapol";
//     node->next = NULL;

//     ft_lstiter(node, &contest);
// }