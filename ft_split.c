/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icheca-g <icheca-g@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 16:23:56 by icheca-g          #+#    #+#             */
/*   Updated: 2024/10/17 19:16:10 by icheca-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *s, char c)
{
	int	i;
	int	count;
	int	flag;

	i = 0;
	count = 0;
	flag = 0;
	while (s[i])
	{
		if (s[i] == c)
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			count++;
		}
		i++;
	}
	return (count);
}

static void	free_split(char **res, int k)
{
	int	i;

	i = 0;
	while (i < k)
	{
		free(res[i]);
		i++;
	}
}

static int	fill_split(const char *s, char c, char **res)
{
	int	cont[3];

	cont[0] = 0;
	cont[2] = 0;
	while (s[cont[0]])
	{
		while (s[cont[0]] == c)
			cont[0]++;
		cont[1] = 0;
		while (s[cont[0] + cont[1]] && s[cont[0] + cont[1]] != c)
			cont[1]++;
		if (cont[1] > 0)
		{
			res[cont[2]] = ft_substr(s, cont[0], cont[1]);
			if (res[cont[2]] == NULL)
			{
				free_split(res, cont[2]);
				return (-1);
			}
			cont[2]++;
		}
		cont[0] += cont[1];
	}
	return (0);
}

char	**ft_split(const char *s, char c)
{
	int		words;
	char	**res;

	words = word_count(s, c);
	res = (char **) malloc((words + 1) * sizeof(char *));
	if (res == 0)
		return (0);
	res[words] = 0;
	if (fill_split(s, c, res) == -1)
	{
		free(res);
		return (0);
	}
	return (res);
}

// int main()
// {
// 	char *s = "           Hello, World!,      fsdfsdff  sfsg sfg sf gfgf";
// 	char **split = ft_split(s, ' ');
// 	for (int i = 0; split[i]; i++)
// 	{
// 		printf("%s\n", split[i]);
// 		free(split[i]);
// 	}
// 	free(split);
// 	return (0);
// }
