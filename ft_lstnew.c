/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/22 19:49:01 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/02/22 21:30:55 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.c"

t_list	*ft_lstnew(void const *content, size_t content_size);
{
	t_list *p;

	p = malloc(sizeof(t_list));
	p->content = content;
	p->content_size = content_size;
	p->next = NULL;
}
