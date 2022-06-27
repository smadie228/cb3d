/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtoast <rtoast@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 18:12:33 by rtoast            #+#    #+#             */
/*   Updated: 2020/11/16 05:36:44 by rtoast           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	ii;
	size_t	count;
	size_t	count1;
	char	*str;

	count = -1;
	count1 = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = ft_strlen(s1);
	ii = ft_strlen(s2);
	if ((str = (char *)malloc((i + ii + 1) * sizeof(char))) == NULL)
		return (NULL);
	while (++count < i)
		str[count] = s1[count];
	while (count <= (i + ii))
	{
		str[count] = s2[count1];
		count++;
		count1++;
	}
	return (str);
}
