/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 21:16:07 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/02/13 21:32:41 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <libft.h>

#include <stdio.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;

	while(str[i] != '\0')
	{
		i++;
	}
	return i;
}
int main(void)
{
	char arr[] = "lalala";
	int len = ft_strlen(arr);
	printf("%d\n", len);
	return 0;
}
