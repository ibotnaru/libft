/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <ibotnaru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 22:42:14 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/02/21 12:20:34 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		c;
	size_t		l;

	l = ft_strlen(needle);
	if (l == 0)
		return ((char *)haystack);
	i = 0;
	c = 0;
	while (i < len && haystack[i])
	{
		if (c < l && haystack[i] == needle[c])
		{
			c++;
			if (c == l)
				return ((char *)(haystack + i - c + 1));
		}
		else
		{
			i -= c;
			c = 0;
		}
		i++;
	}
	return (NULL);
}
