/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adechaji <adechaji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 21:35:27 by adechaji          #+#    #+#             */
/*   Updated: 2024/11/01 16:11:29 by adechaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
// int main()
// {
// 	t_list *node;
// 	t_list *scnode;
// 	char str[] = "abc";
// 	scnode = ft_lstnew(str);
// 	node = ft_lstnew(str);
// 	scnode->next = node;
// 	ft_lstadd_front(&scnode, ft_lstnew(str));
// 	printf("%s\n", node->content);
// }
