/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pesrisaw <pesrisaw@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 12:17:50 by pesrisaw          #+#    #+#             */
/*   Updated: 2024/02/27 15:31:18 by pesrisaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	num_base(int n, int base)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n && ++i)
	{
		n = n / base;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	unsigned int	i;
	char			*ptr;
	long int		x;

	x = n;
	if (x == -2147483648)
		return (ft_strdup("-2147483648"));
	i = num_base(n, 10);
	ptr = malloc(sizeof(char) * (i + 1));
	if (!ptr)
		return (0);
	if (n == 0)
		ptr[0] = '0';
	if (n < 0)
	{
		ptr[0] = '-';
		n *= -1;
	}
	ptr[i] = '\0';
	while (n)
	{
		ptr[--i] = (n % 10) + 48;
		n /= 10;
	}
	return (ptr);
}

// int	main()
// {
// 	int	nbr = 123;
// 	int num = -123;
// 	int zero = 0;
// 	long int min = -2147483648;

// 	printf("Answer : %s\n", ft_itoa(nbr));
// 	printf("Answer : %s\n", ft_itoa(num));
// 	printf("Answer : %s\n", ft_itoa(zero));
// 	printf("Answer : %s\n", ft_itoa(min));
// }