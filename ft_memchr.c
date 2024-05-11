/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 17:19:09 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/02/27 16:30:56 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *) s;
	while (i < n)
	{
		if (ptr[i] == (unsigned char) c)
			return ((void *) s + i);
		i++;
	}
	return (0);
}

// int	main()
// {
// 	char	str[] = "Peerapol Boat Srisawat";
// 	int		ch = ' ';
// 	char	*re;
// 	char	*re_ft;

// 	re = memchr(str, ch, 2);
// 	printf("%s\n", re);

// 	re_ft = ft_memchr(str, ch, 2);
// 	printf("%s", re_ft);	

// }