/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtoast <rtoast@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 19:29:45 by rtoast            #+#    #+#             */
/*   Updated: 2020/11/08 08:13:19 by rtoast           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	ochen_ne_n;
	int				ne_n;
	char			symbol;

	ochen_ne_n = n;
	if (n < 0)
	{
		write(fd, "-", 1);
		ochen_ne_n = n * -1;
	}
	while (ochen_ne_n > 9)
	{
		ne_n = ochen_ne_n % 10;
		ochen_ne_n /= 10;
		symbol = ne_n + '0';
		n = (int)ochen_ne_n;
		ft_putnbr_fd(n, fd);
		write(fd, &symbol, 1);
		return ;
	}
	symbol = ochen_ne_n + '0';
	write(fd, &symbol, 1);
}
