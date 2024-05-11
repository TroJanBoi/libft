/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 14:48:04 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/02/25 01:11:41 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)))
		return (1);
	return (0);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main()
// {
// 	char	n = 'a';
// 	printf("%d", isalnum(n));
// 	printf("%d", ft_isalnum(n));

// 	char	a = 2;
// 	printf("%d", isalnum(a));
// 	printf("%d", ft_isalnum(a));

// }