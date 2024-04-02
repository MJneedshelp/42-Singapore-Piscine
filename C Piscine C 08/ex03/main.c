/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:06:38 by mintan            #+#    #+#             */
/*   Updated: 2024/03/20 15:35:02 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include <stdio.h>

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

void	set_point2(t_point *point)
{
	(*point).x = 19;
	(*point).y = 91;
}

int	main(void)
{
	t_point	point1;
	t_point	point2;
	t_point	point3;

	set_point(&point1);
	point2.x = 75;
	point2.y = 57;
	set_point2(&point3);
	printf("Value of point1.x: %d\n", point1.x);
	printf("Value of point1.y: %d\n", point1.y);
	printf("Value of point2.x: %d\n", point2.x);
	printf("Value of point2.y: %d\n", point2.y);
	printf("Value of point3.x: %d\n", point3.x);
	printf("Value of point3.y: %d\n", point3.y);
	return (0);
}
