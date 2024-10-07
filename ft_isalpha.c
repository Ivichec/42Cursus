/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheca-g <icheca-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:35:10 by icheca-g          #+#    #+#             */
/*   Updated: 2024/10/07 16:59:14 by icheca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

// int main()
// {
// 	char c = 'a';
// 	printf("%d\n", isalpha(c));
// 	return 0;
// }