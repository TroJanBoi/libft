/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:16:17 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/02/24 22:42:48 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c = c + 32;
	return (c);
}

// int	main()
// {
// 	char	sl = 's';
// 	char	su = 'S';

// 	printf("%d |", tolower(sl));
// 	printf(" %d", tolower(su));

// 	printf("\n%d |", ft_tolower(sl));
// 	printf(" %d", ft_tolower(su));
// }