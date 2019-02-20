/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 15:14:53 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/02/14 15:30:55 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
//#include <stdio.h>
int ft_toupper(int c){
	if( c >= 97  && c <= 122)
		return c -= 32;
	else 
		return c;
}
/*int main(void)
{
	int ch = 'A';
	printf("%d", ft_toupper(ch));
	return 0;
}*/
