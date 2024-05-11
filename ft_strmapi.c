/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 17:55:23 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/02/25 22:37:26 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ptr;
	unsigned int	i;

	i = 0;
	ptr = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!s || !ptr)
		return (0);
	while (s[i] != '\0')
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// char	function_test(unsigned int i, char s)
// {
// 	printf("Function : %d and %c\n", i, s);
// 	return (0);
// }

// int	main()
// {
// 	char	str[] = "Peerapol";
// 	// printf("I am %s", str);
// 	char	*ret;
// 	ret = ft_strmapi(str, function_test);
// 	printf("%s\n", ret);
// }
// 	// int i ;

// 	// &i == address of i; %p
// 	// char *ste = "hello"

// 	// ste == address of 1st char
// 	// *ste == 'h'