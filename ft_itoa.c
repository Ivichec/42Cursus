/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheca-g <icheca-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:16:09 by icheca-g          #+#    #+#             */
/*   Updated: 2024/10/17 19:37:56 by icheca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_number_size(int number)
{
	unsigned int	length;

	length = 0;
	if (number == 0)
		return (1);
	if (number < 0)
		length += 1;
	while (number != 0)
	{
		number /= 10;
		length++;
	}
	return (length);
}

char	*ft_itoa(int n)
{
	char			*str;
	long long		number;
	unsigned int	length;

	number = n;
	length = ft_number_size(number);
	str = (char *)malloc((length + 1) * sizeof(char));
	if (!str)
		return (0);
	if (number < 0)
	{
		str[0] = '-';
		number = -number;
	}
	if (number == 0)
		str[0] = '0';
	str[length] = '\0';
	while (number != 0)
	{
		str[--length] = (number % 10) + '0';
		number /= 10;
	}
	return (str);
}

// int main()
// {
// 	int n = 123456;
// 	char *str = ft_itoa(n);
// 	printf("%s\n", str);
// 	return 0;
// }