/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheca-g <icheca-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 14:37:37 by icheca-g          #+#    #+#             */
/*   Updated: 2024/09/26 19:36:40 by icheca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strchr(const char *s, int c)
{
	while(*s)
	{
		if(*s == c)
			return ((char*)s);
		s++;
	}
	return (0);
}
#include <stdio.h>
int main()
{
	char str[] = "Hola mundo";
	char *ptr;
	ptr = ft_strchr(str, 'p');
	printf("%s\n", ptr);
	return 0;
}