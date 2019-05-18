/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cflaxsee <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 18:02:16 by cflaxsee          #+#    #+#             */
/*   Updated: 2019/04/19 18:02:24 by cflaxsee         ###   ########.fr       */
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

void	*ft_memcpy(void *dst, const void *src, size_t n);

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *newl;

	newl = (t_list*)malloc(sizeof(t_list));
	if (!(newl))
		return (NULL);
	if (!content)
	{
		newl->content = NULL;
		newl->content_size = 0;
	}
	else 
	{
		newl->content = (void*)malloc(sizeof(content) * sizeof(void*));
		if (!(newl->content))
			return (NULL);
		ft_memcpy((newl->content), content, sizeof(content) * sizeof(void*));		
		newl->content_size = content_size;
	}
	newl->next = NULL;
	return (newl);
}
