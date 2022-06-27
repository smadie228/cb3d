/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtoast <rtoast@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 17:08:47 by rtoast            #+#    #+#             */
/*   Updated: 2020/12/13 14:27:48 by rtoast           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		linewrite(char **line, char **rem)
{
	int		res;
	char	*str;
	char	*add;

	res = 0;
	if ((add = ft_strchr(*rem, '\n')) != NULL)
	{
		res = 1;
		str = *rem;
		*add = '\0';
		if ((*line = ft_strdup(*rem)) == NULL)
			res = -1;
		if ((*rem = ft_strdup(add + 1)) == NULL)
			res = -1;
		free(str);
		return (res);
	}
	else
	{
		if ((*line = ft_strdup(*rem)) == NULL)
			res = -1;
		free(*rem);
		*rem = NULL;
	}
	return (res);
}

int		get_next_line(int fd, char **line)
{
	char			buf[BUFFER_SIZE + 1];
	char			*str;
	int				nbit;
	static char		*rem;

	if (BUFFER_SIZE < 0 || (read(fd, NULL, 0)) < 0 || line == NULL)
		return (-1);
	if (rem == NULL && (rem = ft_strdup("")) == NULL)
		return (-1);
	nbit = BUFFER_SIZE;
	while ((ft_strchr(rem, '\n') == NULL) && (nbit == BUFFER_SIZE))
	{
		nbit = read(fd, buf, BUFFER_SIZE);
		buf[nbit] = '\0';
		str = rem;
		if ((rem = ft_strjoin(rem, buf)) == NULL)
		{
			free(str);
			return (-1);
		}
		free(str);
	}
	nbit = linewrite(line, &rem);
	return (nbit);
}
