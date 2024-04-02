/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 19:42:01 by mintan            #+#    #+#             */
/*   Updated: 2024/03/12 09:45:59 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_recursive_factorial.c"

int	ft_recursive_factorial(int nb);

int	main(void)
{
	printf("NB: -5, result: %d\n", ft_recursive_factorial(-5));
	printf("NB: 0, result: %d\n", ft_recursive_factorial(0));
	printf("NB: 5, result: %d\n", ft_recursive_factorial(5));
}
