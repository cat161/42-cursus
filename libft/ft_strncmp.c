/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojamal <ojamal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 02:32:00 by ojamal            #+#    #+#             */
/*   Updated: 2022/10/16 17:30:53 by ojamal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			index;
	unsigned char	*ss1;
	unsigned char	*ss2;

	ss1 = (unsigned char *) s1;
	ss2 = (unsigned char *) s2;
	index = 0;
	while ((ss1[index] != '\0'
			|| ss2[index] != '\0') && index < n)
	{
		if (ss1[index] != ss2[index])
			return (ss1[index] - ss2[index]);
		index++;
	}	
	return (0);
}
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char a[] = "hey what's up";
//     char b[] = "heY what's up";
//     printf("str: %d\n", strncmp(a, b, 2));
//     printf("ft_: %d\n", ft_strncmp(a, b, 2));
// }