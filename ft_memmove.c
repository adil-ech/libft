/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adechaji <adechaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:41:41 by adechaji          #+#    #+#             */
/*   Updated: 2024/10/28 22:04:51 by adechaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst_tmp;
	const unsigned char	*src_tmp;

	dst_tmp = (unsigned char *)dst;
	src_tmp = (const unsigned char *)src;
	if (dst_tmp == src_tmp || len == 0)
		return (dst);
	if (dst_tmp < src_tmp)
	{
		while (len--)
			*dst_tmp++ = *src_tmp++;
	}
	else
	{
		dst_tmp += len;
		src_tmp += len;
		while (len--)
			*(--dst_tmp) = *(--src_tmp);
	}
	return (dst);
}
