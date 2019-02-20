/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibotnaru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 20:20:29 by ibotnaru          #+#    #+#             */
/*   Updated: 2019/02/14 20:30:41 by ibotnaru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//#include <stdio.h>
char	*ft_strncat(char *s1, char *s2, int nb)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s1[i])
		i += 1;
	while ((j < nb) && s2[j])
	{
		s1[i + j] = s2[j];
		j += 1;
	}
	s1[i + j] = '\0';
	return (s1);
}
/*int main(void)
{
	char arr[] = "hey!";
	char arr2[] = "lalala";
	printf("%s", ft_strncat(arr, arr2, 2));
	return 0;
}*/

