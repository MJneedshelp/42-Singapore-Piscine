/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:27:56 by mintan            #+#    #+#             */
/*   Updated: 2024/03/05 12:49:36 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"ft_str_is_numeric.c"

int	ft_char_is_numeric(char c);
int	ft_str_is_numeric(char *str);

int	main(void)
{
	printf("Testing char_is_numeric\n");
	printf("0: %d\n", ft_char_is_numeric('0'));
	printf("9: %d\n", ft_char_is_numeric('9'));
	printf(":: %d\n", ft_char_is_numeric(':'));
	printf("i: %d\n", ft_char_is_numeric('i'));
	printf("Testing str_is_numeric\n");
	printf("0123456789: %d\n", ft_str_is_numeric("0123456789"));
	printf("qWe023: %d\n", ft_str_is_numeric("qWe023"));
	printf("/1*2-3+4: %d\n", ft_str_is_numeric("/1*2-3+4"));
}
