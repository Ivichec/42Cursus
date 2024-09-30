/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheca-g <icheca-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 16:23:56 by icheca-g          #+#    #+#             */
/*   Updated: 2024/09/30 20:07:47 by icheca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
	char	**split;
	size_t	s_len;
	size_t	i;
	size_t	j;
	size_t	start;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	split = (char **)malloc((s_len + 1) * sizeof(char *));
	if (!split)
		return (0);
	i = 0;
	j = 0;
	while (i < s_len)
	{
		while (i < s_len && s[i] == c)
			i++;
		start = i;
		while (i < s_len && s[i] != c)
			i++;
		if (i > start)
		{
			split[j] = ft_substr(s, start, i - start);
			if (!split[j])
				return (0);
			j++;
		}
	}
	split[j] = 0;
	return (split);
}

// int main()
// {
// 	char *s = "Hello, World!, fsdfsdff  sfsg sfg sf gfgf";
// 	char **split = ft_split(s, ' ');
// 	for (int i = 0; split[i]; i++)
// 	{
// 		printf("%s\n", split[i]);
// 		free(split[i]);
// 	}
// 	free(split);
// 	return (0);
// }