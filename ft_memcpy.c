/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 11:31:42 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/02/25 02:05:47 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*p;
	unsigned char	*p2;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	p = (unsigned char *) dest;
	p2 = (unsigned char *) src;
	while (i < n)
	{
		*(p++) = *(p2++);
		i++;
	}
	return (dest);
}

// int	main()
// {
// // 	char dest[30] = "Peerapol Boat Srisawat";
// // 	char src[30] = "IT";

// // 	printf("Before : %s\n", dest);
// // 	memcpy(dest, src, 3);
// // 	printf("Memcpy : %s\n", dest);

// // 	ft_memcpy(dest, src, 3);
// // 	printf("ft_memcpy : %s", dest);

// 	char	str[100] = "Learningisfun";
// 	char	*first, *second;

// 	first = str;
// 	second = str;
// 	printf("Original String   : %s\n", str);

// 	memcpy(first + 8, first, 10);
// 	printf("memcpy overlap    : %s\n", str);

// 	ft_memcpy(second + 8, first, 10);
// 	printf("ft_memcpy overlap : %s\n", str);
// }