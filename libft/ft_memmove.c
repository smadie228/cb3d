/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtoast <rtoast@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 16:01:38 by rtoast            #+#    #+#             */
/*   Updated: 2020/11/08 05:03:47 by rtoast           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t			i;
	size_t			h;
	unsigned char	*s1;
	unsigned char	*s2;

	s2 = (unsigned char *)str2;
	s1 = (unsigned char *)str1;
	if (n == 0 || s1 == s2)
		return (s1);
	if (s2 < s1)
	{
		i = n - 1;
		h = -1;
	}
	else
	{
		i = 0;
		h = 1;
	}
	while (n--)
	{
		s1[i] = s2[i];
		i += h;
	}
	return (s1);
}
