/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:42:01 by mintan            #+#    #+#             */
/*   Updated: 2024/03/12 11:24:20 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_iterative_power.c"

int	ft_iterative_power(int nb, int power);

int	main(void)
{
	printf("NB: -5, power: 3. Result: %d\n", ft_iterative_power(-5, 3));
	printf("NB: 0, power: 3. Result: %d\n", ft_iterative_power(0, 3));
	printf("NB: 5, power: 3. Result: %d\n", ft_iterative_power(5, 3));
	printf("NB: 5, power: 0. Result: %d\n", ft_iterative_power(5, 0));
        printf("NB: 5, power: -3. Result: %d\n", ft_iterative_power(5, -3));

}
