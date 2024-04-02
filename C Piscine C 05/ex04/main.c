/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:13:44 by mintan            #+#    #+#             */
/*   Updated: 2024/03/12 12:20:20 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_fibonacci.c"

int	ft_fibonacci(int index);

int	main(void)
{
	printf("Index: -1 | Result: %d\n", ft_fibonacci(-1));
        printf("Index: 0 | Result: %d\n", ft_fibonacci(0));
        printf("Index: 1 | Result: %d\n", ft_fibonacci(1));
        printf("Index: 2 | Result: %d\n", ft_fibonacci(2));
        printf("Index: 6 | Result: %d\n", ft_fibonacci(6));
        printf("Index: 8 | Result: %d\n", ft_fibonacci(8));
        printf("Index: 21 | Result: %d\n", ft_fibonacci(21));
        printf("Index: 30 | Result: %d\n", ft_fibonacci(30));
}
