/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 16:25:38 by mintan            #+#    #+#             */
/*   Updated: 2024/03/04 16:35:40 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*This is to include the other files containing the functions to use in this main file*/
/*Since C is stingy with the memory it uses, there is a need to include the funtions
  in the other files that one is calling as well */


#include <stdio.h>
#include "ft_ft.c"

void ft_ft(int *nbr);

int main(void)
{
	int	o;	/*used to store the original value at the int var*/
	
	o = 24;
	printf("Original value of int variable: %d \n", o);	/*Print the original int var to use as a comparison*/
	printf("Run ft_ft \n");
	ft_ft(&o);	/*input the address of o as a parameter*/
	printf("Altered value of int variable: %d \n", o);	/*Print the updated int var to verify that ft_ft worked*/
}



