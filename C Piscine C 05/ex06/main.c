/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 09:25:35 by mintan            #+#    #+#             */
/*   Updated: 2024/03/13 09:33:34 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_is_prime.c"

int	main(void)
{
	printf("Check: 1 | Result: %d\n", ft_is_prime(1));
        printf("Check: 2 | Result: %d\n", ft_is_prime(2));
        printf("Check: 4 | Result: %d\n", ft_is_prime(4));
        printf("Check: 9 | Result: %d\n", ft_is_prime(9));
        printf("Check: 127 | Result: %d\n", ft_is_prime(127));
        printf("Check: 919 | Result: %d\n", ft_is_prime(919));
        printf("Check: 56 | Result: %d\n", ft_is_prime(56));
        printf("Check: 0 | Result: %d\n", ft_is_prime(0));
        printf("Check: 99 | Result: %d\n", ft_is_prime(99));
        printf("Check: 99 | Result: %d\n", ft_is_prime(1747));
}
