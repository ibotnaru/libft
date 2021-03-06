/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcnt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 18:16:44 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/02/28 18:47:49 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcnt(char const *s, char d)
{
	int	c;
	int	f;

	c = 0;
	f = 0;
	while (*s)
	{
		if (*s != d)
		{
			if (f == 0)
			{
				c += 1;
				f = 1;
			}
		}
		else
			f = 0;
		s++;
	}
	return (c);
}
