/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflaxsee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 12:30:19 by cflaxsee          #+#    #+#             */
/*   Updated: 2019/04/21 12:30:21 by cflaxsee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef struct          s_list
{
        void                    *content;
        size_t                  content_size;
        struct s_list   *next;
}                                       t_list;

void ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *d;

	while (*alst)
	{
		d = (*alst)->next;
		(*del)((*alst)->content, (*alst)->content_size);
		free(*alst);
		*alst = d;
	}
	*alst = NULL;
}
