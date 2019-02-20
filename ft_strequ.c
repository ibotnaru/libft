/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 21:02:40 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/02/16 21:10:35 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>
int ft_strequ(char const *s1, char const *s2)
{
	size_t		i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	if (s1[i] != s2[i])
		return (0);
	return (1);
}
/*int main(void)
{
	char arr1[] = "ppppp";
	char arr2[] = "ppppp";
	printf("%d", ft_strequ(arr1, arr2));
	return 0;
}*/
