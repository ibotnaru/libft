/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 18:13:13 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/02/16 21:11:32 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int ft_strnequ(char const *s1, char const *s2, size_t n)
{
	{
	size_t		i;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	if (s1[i] != s2[i] && i < n)
		return (0);
	return (1);
}
}
/*int main(void)
{
	char arr1[] = "bbbbbb";
	char arr2[] = "bbbbbb";
	printf("%d", ft_strnequ(arr1, arr2, 20));
	return 0;
}*/
