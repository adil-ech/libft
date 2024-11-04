/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adechaji <adechaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:39:01 by adechaji          #+#    #+#             */
/*   Updated: 2024/10/31 10:01:31 by adechaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmpb;

	tmpb = (unsigned char *)b;
	while (len > 0)
	{
		*tmpb = (unsigned char)c;
		len--;
		tmpb++;
	}
	return (b);
}
