/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 15:09:17 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/02/24 22:29:51 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main()
// {
// 	char	str = 'a';
// 	printf("%d", isascii(str));
// 	printf(" %d", ft_isascii(str));

// 	int	str1 = 128;
// 	printf("\n%d", isascii(str1));
// 	printf(" %d", ft_isascii(str1));
// }