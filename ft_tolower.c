/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 14:29:01 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/02/14 15:15:39 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <libft.h>
//#include <stdio.h>

int ft_tolower(int c){
	if( c >= 'A' && c <= 'Z')
		return c + 'a' - 'A';
	else
		return (c);
}
/*int main(void)
{
	int num = 't';
	printf("%d", ft_tolower(num));
}*/
