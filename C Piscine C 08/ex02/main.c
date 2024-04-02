/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 11:49:22 by mintan            #+#    #+#             */
/*   Updated: 2024/03/20 11:57:17 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_abs.h"

int	main(void)
{
	int	val1;
	int	val2;
	int	val3;

	val1 = 0;
	val2 = -99;
	val3 = 959;
	printf("Original val: %d | ABS: %d\n", val1, ABS(val1));
	printf("Original val: %d | ABS: %d\n", val2, ABS(val2));
	printf("Original val: %d | ABS: %d\n", val3, ABS(val3));
}
