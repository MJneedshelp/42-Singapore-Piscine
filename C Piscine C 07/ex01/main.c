/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 12:16:07 by mintan            #+#    #+#             */
/*   Updated: 2024/03/17 12:03:58 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_range.c"

int	*ft_range(int min, int max);

int	main(void)
{
	int	*arr;
	int	i;

	i = 0;
	printf("Test range (-2, 7)\n");
	arr = ft_range(-2, 7);
	if (arr == 0)
	{
		printf("NULL array pointer returned\n");
	}
	else
	{
		while (i < 9)
		{
			printf("%d, ", arr[i]);
			i++;
		}
	}
	free (arr);
	return (0);
}
