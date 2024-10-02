/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheca-g <icheca-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 19:39:36 by icheca-g          #+#    #+#             */
/*   Updated: 2024/10/02 19:56:35 by icheca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_str;
	unsigned int	i;

	if (!s)
		return (0);
	new_str = (char *)malloc(ft_strlen(s) + 1);
	if (!new_str)
		return (0);
	i = 0;
	while (s[i])
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
// char ft_toupper_modified(unsigned int index, char c) {
// 	(void)index;
// 	if (c >= 'a' && c <= 'z') {
// 		return c - 32;
// 	}
// 	return c;
// }
// int main()
// {
// 	char *s = "Hello, World!";
// 	char *new_str = ft_strmapi(s, ft_toupper_modified);
// 	printf("%s\n", new_str);
// 	free(new_str);
// }