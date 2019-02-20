/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 16:32:24 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/02/17 18:19:39 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void ft_bzero(void *s, size_t n)
{
	char *str;
	    str = (char *) s;

	    int i = 0;
	    while(n > 0)
		{
	        str[i] = '\0';
	        i++;
	        n--;
		}
}
/*int main(void)
{
	char arr[] = "lalala";
	printf("%s", ft_bzero(arr, 3));
	return 0;
}*/
