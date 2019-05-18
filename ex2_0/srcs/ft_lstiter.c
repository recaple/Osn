/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflaxsee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 12:49:06 by cflaxsee          #+#    #+#             */
/*   Updated: 2019/04/21 12:49:08 by cflaxsee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

typedef struct          s_list
{
        void                    *content;
        size_t                  content_size;
        struct s_list   *next;
}                                       t_list;


void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *i;
	while (lst)
	{
		i = lst->next;
		(*f)(lst);
		lst = i;
	}
}
