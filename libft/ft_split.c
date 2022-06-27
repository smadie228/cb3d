/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtoast <rtoast@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 16:55:18 by rtoast            #+#    #+#             */
/*   Updated: 2020/11/21 21:16:14 by rtoast           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		**ft_free(char **arrstr, int n)
{
	while (n != -1)
	{
		free(arrstr[n]);
		n--;
	}
	free(arrstr);
	return (NULL);
}

static int		ft_dementor_count(char const *s, char c)
{
	size_t num;
	size_t i;

	num = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c)
			num++;
		i++;
	}
	return (num);
}

static char		*ft_stroka_opredelitel(char const *s, int i, char c)
{
	int		k;
	int		icpy;
	char	*shtuka;

	icpy = i;
	k = 0;
	while (s[i] != c && s[i] != '\0')
	{
		k++;
		i++;
	}
	if (!(shtuka = (char *)malloc((k + 1) * (sizeof(char)))))
		return (NULL);
	k = 0;
	while (icpy < i)
	{
		shtuka[k] = s[icpy];
		k++;
		icpy++;
	}
	shtuka[k] = '\0';
	return (shtuka);
}

char			**ft_split(char const *s, char c)
{
	int		num;
	int		i;
	int		k;
	char	**arrstr;

	i = 0;
	k = 0;
	if (s == NULL)
		return (NULL);
	num = ft_dementor_count(s, c);
	if ((arrstr = (char **)malloc((num + 2) * sizeof(char *))) == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			if (!(arrstr[k] = ft_stroka_opredelitel(s, i, c)))
				return (ft_free(arrstr, k));
			i += ft_strlen(arrstr[k++]);
		}
		else
			i++;
	}
	arrstr[k] = NULL;
	return (arrstr);
}
