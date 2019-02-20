/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 21:38:04 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/02/14 20:16:12 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>
char	*ft_strcat(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
		i += 1;
	while (s2[j])
	{
		s1[i + j] = s2[j];
		j += 1;
	}
	s1[i + j] = '\0';
	return (s1);
}
/*int main(void)
{
	char arr[] = "hello";
	char arr2[] = "lalala";
	printf("%s", ft_strcat(arr, arr2));
	return 0;
}*/
