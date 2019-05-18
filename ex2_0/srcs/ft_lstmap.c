/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflaxsee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 12:55:47 by cflaxsee          #+#    #+#             */
/*   Updated: 2019/04/21 12:55:50 by cflaxsee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

typedef struct          s_list
{
        void                    *content;
        size_t                  content_size;
        struct s_list   *next;
}                                       t_list;

t_list	*ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
{
	t_list *i;
	t_list *m;
	
	i = NULL;
	m = i;
        while (lst)
        {
                i = (*f)(lst);
                lst = lst->next;
		i = i->next;
        }
	i = NULL;
	return (m);
}
