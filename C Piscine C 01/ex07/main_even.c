/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 09:27:52 by mintan            #+#    #+#             */
/*   Updated: 2024/03/04 12:11:51 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"ft_rev_int_tab.c"

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	numbers[8];
	int	i;
	int	*tab;

	i = 0;
	printf("Original array\n");
	while (i < 8)
	{
		numbers[i] = i;
		printf("Array index: %d | Value: %d\n", i, numbers[i]);
		i++;
	}
	ft_rev_int_tab(&numbers[0], 8);
	printf("Swapped array\n");
	i = 0;
	while (i < 8)
	{
		printf("Array index: %d | Value: %d\n", i, numbers[i]);
		i++;
	}
}
