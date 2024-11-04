/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adechaji <adechaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 19:58:21 by adechaji          #+#    #+#             */
/*   Updated: 2024/11/04 19:49:56 by adechaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countwords(char const *str, char sep)
{
	int	i;
	int	cword;
	int	count;

	i = 0;
	cword = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == sep)
			cword = 0;
		else if (cword == 0)
		{
			count++;
			cword = 1;
		}
		i++;
	}
	return (count);
}

static int	wordlen(char const *str, char sep)
{
	int	len;

	len = 0;
	while (str[len] && str[len] != sep)
		len++;
	return (len);
}

static void	freewords(char **res, int i)
{
	while (i--)
		free(res[i]);
	free(res);
}

static int	fillwords(char **res, const char *s, char c)
{
	int	i;
	int	len;

	i = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
		{
			len = wordlen(s, c);
			res[i] = (char *)malloc(sizeof(char) * (len + 1));
			if (!res[i])
			{
				freewords(res, i);
				return (0);
			}
			ft_memcpy(res[i], s, len);
			res[i++][len] = '\0';
			s += len;
		}
	}
	res[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		cwords;
	char	**res;

	if (!s || *s == '\0')
	{
		res = (char **)malloc(sizeof(char *));
		if (!res)
			return (NULL);
		res[0] = NULL;
		return (res);
	}
	cwords = countwords(s, c);
	res = (char **)malloc(sizeof(char *) * (cwords + 1));
	if (!res)
		return (NULL);
	if (!fillwords(res, s, c))
		return (NULL);
	return (res);
}

// int main()
// {
//    char *str = "dawdagv dhad awhdauw 8w";
//     char **words = ft_split(str, ' ');
// 	int i = 0;
// 	if (words)
// 	{
// 		while (words[i])
// 		{
// 			printf("split num %d: %s\n", i, words[i]);
// 			free(words[i]);
// 			i++;
// 		}
// 		free(words);
// 	}
//  return 0;
// }
