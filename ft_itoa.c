/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheca-g <icheca-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:16:09 by icheca-g          #+#    #+#             */
/*   Updated: 2024/10/15 16:33:58 by icheca-g         ###   ########.fr       */
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
	char			*string;
	long long		number;
	unsigned int	length;

	number = n;
	length = ft_number_size(number);
	string = (char *)malloc(sizeof(char) * (length + 1));
	if (string == NULL)
		return (NULL);
	if (number < 0)
	{
		string[0] = '-';
		number = -number;
	}
	if (number == 0)
		string[0] = '0';
	string[length] = '\0';
	while (number != 0)
	{
		string[--length] = (number % 10) + '0';
		number /= 10;
	}
	return (string);
}

// int main()
// {
// 	int n = 123456;
// 	char *str = ft_itoa(n);
// 	printf("%s\n", str);
// 	return 0;
// }