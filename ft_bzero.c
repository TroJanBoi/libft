/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 11:13:47 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/02/27 14:22:03 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset (s, '\0', n);
}

// int	main()
// {
// 	char	str[30] = "Peerapol Boat Srisawat";

// 	ft_bzero(str + 4, 5);
// 	printf("%s", str);
// }