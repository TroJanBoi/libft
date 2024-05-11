/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 20:36:59 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/05/02 12:31:19 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	sign_overflow(long s)
{
	if (s > 0)
		return (-1);
	else
		return (0);
}

int	ft_atoi(const char *nptr)
{
	size_t	i;
	long	s;
	long	ret;

	i = 0;
	s = 1;
	ret = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
		{
			s *= -1;
		}
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		ret = (ret * 10) + (nptr[i] - 48);
		i++;
		if (ret < 0)
			return (sign_overflow(s));
	}
	return (ret * s);
}

// int	main()
// {
// 	char	str[] = "-90000000000000000000000000000000#00";
// 	printf("%d", ft_atoi(str));

// 	char	str2[] = "90000000000000000000000000000000";
// 	printf("\n%d", ft_atoi(str2));
// }