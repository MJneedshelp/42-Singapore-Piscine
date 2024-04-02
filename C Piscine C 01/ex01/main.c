/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:25:38 by mintan            #+#    #+#             */
/*   Updated: 2024/03/03 15:00:21 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This is to include the other files containing the functions to use in this main file*/
/*Since C is stingy with the memory it uses, there is a need to include the funtions
  in the other files that one is calling as well */


#include <stdio.h>
#include "ft_ultimate_ft.c"

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int	o;	/*used to store the original value at the int var*/
	int*		ptr1;
	int**		ptr2;
	int***		ptr3;
	int****		ptr4;
	int*****	ptr5;
	int******	ptr6;
	int*******	ptr7;
	int********	ptr8;
	int*********	ptr9;


	o = 24;
	ptr1 = &o;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ptr9 = &ptr8;

	printf("Original value of int variable: %d \n", o);	/*Print the original int var to use as a comparison*/
	printf("Run ft_ultimate_ft \n");
	ft_ultimate_ft(ptr9);					/*input the pppointer of o as a parameter*/
	printf("Altered value of int variable: %d \n", o);	/*Print the updated int var to verify that ft_ultimate_ft worked*/ 
}



