/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:05:41 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/02/24 22:42:14 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	lsrc;
	size_t	ldst;

	ldst = ft_strlen(dst);
	lsrc = ft_strlen(src);
	if (ldst >= size)
		ldst = size;
	if (ldst == size)
		return (lsrc + size);
	if (lsrc < size - ldst)
		ft_memcpy(dst + ldst, src, lsrc + 1);
	else
	{
		ft_memcpy(dst + ldst, src, size - ldst - 1);
		dst[size - 1] = '\0';
	}
	return (lsrc + ldst);
}

// int	main()
// {
// 	char dst[] = "Peerapol";
// 	char src[] = "Srisawat";

// 	printf("%zu", ft_strlcat(dst, src, 20));
// }
