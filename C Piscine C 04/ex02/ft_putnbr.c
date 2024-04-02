/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 09:54:00 by mintan            #+#    #+#             */
/*   Updated: 2024/03/11 11:17:42 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* Recursive code that /10 to the base digit until it cannot be divided by 10
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
