/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:48:53 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/02/25 22:32:52 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		i;
	int		temp;

	i = 0;
	ptr = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!s1 || !s2 || !ptr)
		return (0);
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	temp = i;
	i = 0;
	while (s2[i] != '\0')
	{
		ptr[temp] = s2[i];
		temp++;
		i++;
	}
	ptr[temp] = '\0';
	return (ptr);
}

// int	main()
// {
// 	char	s1[] = "Peerapol ";
// 	char	s2[] = "Srisawat";
// 	char	*ret;

// 	ret = ft_strjoin(s1, s2);
// 	printf("%s", ret);
// }