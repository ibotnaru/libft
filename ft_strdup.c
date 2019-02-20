/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 13:06:47 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/02/15 13:06:49 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//#include <stdlib.h>
//#include <stdio.h>
char	*ft_strdup(char *src)
{
	int		len;
	int		i;
	char	*dest;

	len = 0;
	i = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	dest = malloc(sizeof(*dest) * (len + 1));
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int main(){
	char str[] = "hello";
	char *p;
	p = ft_strdup(str);
	printf("%s\n", p);
	return 0;
}*/
