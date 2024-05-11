/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 12:43:40 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/02/25 23:33:21 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}

/*--main--*/

// void	ft_write(unsigned int n, char *s)
// {
// 	printf("String : %d and %s\n", n, s);
// }

// int	main()
// {
// 	char	str[] = "Peerapol";

// 	ft_striteri(str, &ft_write);
// }