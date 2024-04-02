/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 09:39:04 by mintan            #+#    #+#             */
/*   Updated: 2024/03/13 11:05:29 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	div;

	div = 3;
	if (nb < 2)
		return (0);
	else if (nb % 2 == 0 && nb != 2)
		return (0);
	while (div * div <= nb)
	{
		if (nb % div == 0)
			return (0);
		div += 2;
	}
	return (1);
}

/* Check if the input number is prime first. Return nb if it is prime.
 */

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
		return (nb);
	if (nb % 2 == 0)
		nb += 1;
	while (ft_is_prime(nb) != 1)
	{
		nb += 2;
	}
	return (nb);
}
