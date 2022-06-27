/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtoast <rtoast@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 22:24:00 by rtoast            #+#    #+#             */
/*   Updated: 2020/11/09 15:10:00 by rtoast           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	n;
	size_t	i;

	i = 0;
	n = ft_strlen(s);
	str = (char *)malloc((n + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	while (i <= n)
	{
		str[i] = s[i];
		i++;
	}
	return (str);
}
