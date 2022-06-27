/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtoast <rtoast@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 16:06:45 by rtoast            #+#    #+#             */
/*   Updated: 2021/03/23 19:44:18 by rtoast           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int		f(char *str, int i)
{
	while (str[i] < '0' || str[i] > '9')
	{
		if ((str[i] != '-') && (str[i] != '+') && (str[i] != '\n'))
			if ((str[i] != ' ') && (str[i] != '\f'))
				if ((str[i] != '\r') && (str[i] != '\t') && (str[i] != '\v'))
					return (1);
		i++;
	}
	return (0);
}

static void		f2(char *str, int i, int *znak, int *znak_plus)
{
	while (str[i] < '0' || str[i] > '9')
		if (str[i++] == '-')
			(*znak)++;
	i = 0;
	while (str[i] < '0' || str[i] > '9')
		if (str[i++] == '+')
			(*znak_plus)++;
}

int				ft_atoi(char *str)
{
	unsigned long long	rez;
	int					i;
	int					znak;
	int					minus;
	int					znak_plus;

	minus = 1;
	i = 0;
	znak = 0;
	znak_plus = 0;
	rez = 0;
	if (f(str, i) == 1)
		return (-1);
	f2(str, i, &znak, &znak_plus);
	if ((znak_plus > 1) || (znak >= 1 && znak_plus >= 1) || (znak > 1))
		return (-1);
	while (str[i] < '0' || str[i] > '9')
		i++;
	while (str[i] >= '0' && str[i] <= '9' && rez < __INT32_MAX__)
		rez = rez * 10 + str[i++] - '0';
	if (rez > __INT32_MAX__)
		rez = __INT32_MAX__;
	return (rez * minus);
}
