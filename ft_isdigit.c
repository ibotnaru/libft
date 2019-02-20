/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 15:59:14 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/02/15 14:16:33 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <libft.h>
//#include <stdio.h>
int ft_isdigit(int c)
{
	if(c >= 0 && c <= 9)
		return c;
	else 
		return 0;
}
/*int main(void)
{
	int ch = 6;
	printf("%d", ft_isdigit(ch));
	return 0;
}*/
