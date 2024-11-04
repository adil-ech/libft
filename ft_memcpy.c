/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adechaji <adechaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:46:10 by adechaji          #+#    #+#             */
/*   Updated: 2024/11/01 22:25:05 by adechaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dsttmp;
	const unsigned char	*srctmp;

	dsttmp = (unsigned char *)dst;
	srctmp = (const unsigned char *)src;
	if (dsttmp == NULL && srctmp == NULL)
		return (NULL);
	while (n > 0)
	{
		*dsttmp = *srctmp;
		dsttmp++;
		srctmp++;
		n--;
	}
	return (dst);
}
