/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adechaji <adechaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:28:52 by adechaji          #+#    #+#             */
/*   Updated: 2024/11/06 20:33:51 by adechaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ss;
	size_t				i;

	ss = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ss[i] == (unsigned char)c)
		{
			return ((void *) &ss[i]);
		}
		i++;
	}
	return (NULL);
}
