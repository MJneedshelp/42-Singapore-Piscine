/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:41:55 by mintan            #+#    #+#             */
/*   Updated: 2024/03/13 09:35:24 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Numbers 2 and below are not prime. 
 * Even numbers are not prime. 
 * If the nb can be divided by the divisor (nb % divisor == 0) -> not prime.
 * If the divisor can be incremented up to (divisor * divisor > NB) -> prime.*/

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
