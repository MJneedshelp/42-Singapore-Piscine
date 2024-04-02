/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 10:42:01 by mintan            #+#    #+#             */
/*   Updated: 2024/03/19 11:37:31 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_putnbr_base.c"

void	ft_putnbr_base(int nbr, char *base);

int	main(void)
{
	char	base[] = "1";
	int		n1;
	int		n2;
	int		n3;
	int		n4;
	int		n5;
	int		n6;
	int		n7;	


	n1 = 0;
	n2 = 789;
	n3 = 957628;
	n4 = 96579676;
	n5 = -78954;
	n6 = 2147483647;
	n7 = -2147483648;

	printf("Try: %d | Result:\n", n1);
	ft_putnbr_base(n1, base);
	printf("Try: %d | Result:\n", n2);
	ft_putnbr_base(n2, base);
	printf("Try: %d | Result:\n", n3);
	ft_putnbr_base(n3, base);
	printf("Try: %d | Result:\n", n4);
	ft_putnbr_base(n4, base);
	printf("Try: %d | Result:\n", n5);
	ft_putnbr_base(n5, base);	
	printf("Try: %d | Result:\n", n6);
	ft_putnbr_base(n6, base);	
	printf("Try: %d | Result:\n", n7);
	ft_putnbr_base(n7, base);	
}
