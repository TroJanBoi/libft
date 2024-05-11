/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 15:10:50 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/02/24 22:42:55 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}

// int	main()
// {
// 	char str_up = 'P';
// 	char str_low = 'p';

// 	printf("%d\n", toupper(str_low));
// 	printf("%d\n", toupper(str_up));

// 	printf("%d\n", ft_toupper(str_low));
// 	printf("%d", ft_toupper(str_up));
// }