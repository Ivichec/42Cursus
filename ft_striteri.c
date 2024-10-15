/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheca-g <icheca-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 19:58:03 by icheca-g          #+#    #+#             */
/*   Updated: 2024/10/15 16:36:17 by icheca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void ft_tolower_modified(unsigned int index, char *c) {
// 	(void)index;
// 	if (*c >= 'A' && *c <= 'Z') {
// 		*c += 32;
// 	}
// }
// int main()
// {
// 	char s[] = "Hello, World!";
// 	ft_striteri(s, ft_tolower_modified);
// 	printf("%s\n", s);
// }