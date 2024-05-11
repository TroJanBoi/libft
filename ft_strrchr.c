/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 15:47:27 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/02/25 02:19:10 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char) c)
			return ((char *)s + i);
		i--;
	}
	return (0);
}

// int	main()
// {
// 	char	str[] = "Peerapol Boat Srisawat";
// 	int		ch = ' ';

// 	printf("Exam: |%s|\n", strrchr(str, ch));

// 	printf("Ans : |%s|", ft_strrchr(str, ch));
// }