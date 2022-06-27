/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtoast <rtoast@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 17:08:15 by rtoast            #+#    #+#             */
/*   Updated: 2020/12/12 18:32:24 by rtoast           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

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

char	*ft_strchr(const char *str, int c)
{
	size_t	i;
	char	*s;

	i = 0;
	s = (char *)str;
	while (s[i] != '\0')
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return (&s[i]);
		i++;
	}
	if (s[i] != c)
		return (NULL);
	return (&s[i]);
}
