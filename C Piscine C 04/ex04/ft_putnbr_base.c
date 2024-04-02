/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 09:27:12 by mintan            #+#    #+#             */
/*   Updated: 2024/03/19 11:22:06 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

/* Checks: 
*  - base is empty or size 1
*  - base contains same character
*  - base contains + or -
 */
int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = i + 1;
	if (ft_strlen(base) == 0 || ft_strlen(base) == 1)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base_long(long nbr, char *base, int base_size)
{
	if (nbr < 0)
	{
		write(1, &"-", 1);
		ft_putnbr_base_long(-nbr, base, base_size);
	}
	else if (nbr > base_size - 1)
	{
		ft_putnbr_base_long(nbr / base_size, base, base_size);
		ft_putnbr_base_long(nbr % base_size, base, base_size);
	}
	else
	{
		write(1, &base[nbr], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_size;

	if (check_base(base) == 1)
	{
		base_size = ft_strlen(base);
		ft_putnbr_base_long(nbr, base, base_size);
	}
}
