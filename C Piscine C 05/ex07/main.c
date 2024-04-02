/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 10:27:22 by mintan            #+#    #+#             */
/*   Updated: 2024/03/13 11:04:35 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_find_next_prime.c"

int	ft_find_next_prime(int nb);

int	main(void)
{
	printf("nb: 3 | expected result: 3 | result: %d\n", ft_find_next_prime(3));
	printf("nb: 12 | expected result: 13 | result: %d\n", ft_find_next_prime(12));
	printf("nb: 200 | expected result: 211 | result: %d\n", ft_find_next_prime(200));
	printf("nb: 677 | expected result: 677 | result: %d\n", ft_find_next_prime(677));
	printf("nb: 845 | expected result: 853 | result: %d\n", ft_find_next_prime(845));
}
