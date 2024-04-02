/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 11:23:47 by mintan            #+#    #+#             */
/*   Updated: 2024/03/21 15:02:35 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		write(1, &str[i], 1);
		i++;
	}
}

/*Recursive code that /10 to the base digit until it cannot be divided by 10
 * to write first. First condition handles the case of –2147483648  */

void	ft_putnbr(int nb)
{
	char	ascii_c;

	if (nb == -2147483648)
	{
		write(1, &"-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			write(1, &"-", 1);
			ft_putnbr(-nb);
		}
		else if (nb > 9)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else
		{
			ascii_c = nb + 48;
			write(1, &ascii_c, 1);
		}
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while ((par[i]).str != NULL)
	{
		ft_putstr((par[i]).str);
		ft_putstr("\n");
		ft_putnbr((par[i]).size);
		ft_putstr("\n");
		ft_putstr((par[i]).copy);
		ft_putstr("\n");
		i++;
	}
}
