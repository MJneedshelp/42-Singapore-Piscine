/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 12:16:07 by mintan            #+#    #+#             */
/*   Updated: 2024/03/21 15:57:08 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_ultimate_range.c"

int	ft_ultimate_range(int **range, int min, int max);

int	main(void)
{
	int	*arr;
	int	i;
	int	arr_size;

	i = 0;
	printf("Test range (-2, 7)\n");
	arr_size = ft_ultimate_range(&arr, -2, 7);
	if (arr_size == 0)
	{
		printf("NULL array pointer returned\n");
	}
	else
	{
		while (i < arr_size)
		{
			printf("%d, ", arr[i]);
			i++;
		}
	}
	free (arr);
	return (0);
}
