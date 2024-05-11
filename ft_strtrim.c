/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:04:39 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/03/03 15:04:43 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	set_char(char c, char const *set)
{
	size_t	n;

	n = 0;
	while (set[n]) // equal *
	{
		if (set[n] == c) // * == *
			return (1);
		n++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		start;
	size_t		end;
	size_t		i;
	char		*ptr;

	start = 0;
	i = 0;
	end = ft_strlen(s1);
	while (s1[start] && set_char(s1[start], set))
		start++;
	while (end > start && set_char(s1[end - 1], set))
		end--;
	ptr = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!ptr)
		return (0);
	while (start < end)
	{
		ptr[i] = s1[start];
		i++;
		start++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// int	main()
// {
// 	char	str[] = "|*Peerapol**Srisawat|*";
// 	char	ch[] = "*|"; 0 : * and 1 : |
// 	char	*ret;

// 	ret = ft_strtrim(str, ch);
// 	printf("%s", ret);

// }