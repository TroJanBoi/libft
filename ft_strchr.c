/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:24:05 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/02/25 16:38:05 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if ((char) c == *s)
			return ((char *) s);
		s++;
	}
	if ((char) c == '\0')
		return ((char *)s);
	else
		return (0);
}

// int	main()
// {
// 	const char	str[] = "Peerapol Boat Srisawat";
// 	int	ch = ' ';
// 	char *ret;
// 	char *s;

// 	s = ft_strchr(str, ch);
// 	ret = strchr(str, ch);

// 	printf("String After : |%c| is - |%s|\n", ch, ret);
// 	printf("String After : |%c| is - |%s|\n", ch, s);
// }