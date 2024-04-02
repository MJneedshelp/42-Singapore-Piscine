/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 10:12:39 by mintan            #+#    #+#             */
/*   Updated: 2024/03/11 11:16:10 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "ft_putnbr.c"

void	ft_putnbr(int nb);

int	main(void)
{
	printf("Try writing out 0\n");
        ft_putnbr(0);
	printf("\n");
	printf("Try writing out 42\n");
        ft_putnbr(42);
	printf("\n");
        printf("Try writing out 7845\n");
	ft_putnbr(7845);
	printf("\n");
        printf("Try writing out 2147483647\n");
        ft_putnbr(2147483647);
	printf("\n");
        printf("Try writing out -647\n");
        ft_putnbr(-647);
	printf("\n");
        printf("Try writing out -2147483648\n");
        ft_putnbr(-2147483648);
        printf("\n");

}
