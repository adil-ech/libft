/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adechaji <adechaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:18:59 by adechaji          #+#    #+#             */
/*   Updated: 2024/11/04 17:52:12 by adechaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlst;
	t_list	*nobj;

	nlst = NULL;
	if (!f || !del || !lst)
		return (NULL);
	while (lst)
	{
		nobj = ft_lstnew(f(lst->content));
		if (!nobj)
		{
			ft_lstclear(&nlst, del);
			return (NULL);
		}
		ft_lstadd_back(&nlst, nobj);
		lst = lst->next;
	}
	return (nlst);
}
