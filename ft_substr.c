/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:06:53 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/02/26 19:56:16 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*ptr;
	size_t	str_len;

	if (!s)
		return (NULL);
	str_len = ft_strlen(s);
	if (start > str_len)
		len = 0;
	else if (len > (str_len - start))
		len = str_len - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	s += start;
	ptr = str;
	*(str + len) = '\0';
	while (len-- && *s)
		*str++ = *s++;
	return (ptr);
}

// #include <stdio.h>
// #include <string.h>

// int	main()
// {
// 	char	str[] = "Peerapol Boat Srisawat";
// 	char	*ret;
// 	char	*ret2;

// 	// ret = ft_substr(str, 0, 13);
// 	// printf("%s\n", ret);

// 	// ret2 = ft_substr(str, 0, -1);

// 	ret2 = ft_substr("hola", 4294967295, 0);
// 	printf("%s", ret2);
// }