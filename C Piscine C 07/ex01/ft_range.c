/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:56:49 by mintan            #+#    #+#             */
/*   Updated: 2024/03/17 12:05:10 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*range;
	int	i;

	i = 0;
	range = NULL;
	size = max - min;
	if (size <= 0)
		return (range);
	range = (int *)malloc(size * sizeof(int));
	if (range != NULL)
	{
		while (i < size)
		{
			range[i] = min;
			min++;
			i++;
		}
	}
	return (range);
}
