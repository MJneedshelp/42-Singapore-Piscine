/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:18:13 by mintan            #+#    #+#             */
/*   Updated: 2024/03/12 15:26:55 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_sqrt.c"

int	ft_sqrt(int nb);

int	main(void)
{
	printf("nb: -5 | result: %d\n", ft_sqrt(-5));
        printf("nb: 0 | result: %d\n", ft_sqrt(0));
        printf("nb: 5 | result: %d\n", ft_sqrt(5));
        printf("nb: 4 | result: %d\n", ft_sqrt(4));
        printf("nb: 16 | result: %d\n", ft_sqrt(16));
        printf("nb: 144 | result: %d\n", ft_sqrt(144));
}


