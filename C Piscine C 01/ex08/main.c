/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:18:34 by mintan            #+#    #+#             */
/*   Updated: 2024/03/04 13:50:09 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"ft_sort_int_tab.c"

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int	i;

	i = 0;
	printf("Original array: ");
	while (i < 10)
	{
		printf("%d, ", arr[i]);
		i++;
	}
	printf("\nRun ft_sort_int_tab\n");
	ft_sort_int_tab(&arr[0], 10);
	printf("Sorted array: ");
	i = 0;
	while (i < 10)
	{
		printf("%d, ", arr[i]);
		i++;
	}
}
