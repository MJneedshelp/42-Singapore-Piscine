/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:27:56 by mintan            #+#    #+#             */
/*   Updated: 2024/03/05 13:23:59 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"ft_str_is_uppercase.c"

int	ft_char_is_uppercase(char c);
int	ft_str_is_uppercase(char *str);

int	main(void)
{
	printf("Testing char_is_lowerupper\n");
	printf("L: %d\n", ft_char_is_uppercase('L'));
	printf("5: %d\n", ft_char_is_uppercase('5'));
	printf(":: %d\n", ft_char_is_uppercase(':'));
	printf(" : %d\n", ft_char_is_uppercase(' '));
	printf("Testing str_is_uppercase\n");
	printf("CAPSAREFORWEARING: %d\n", ft_str_is_uppercase("CAPSAREFORWEARING"));
	printf("Some Upper, some lower: %d\n", ft_str_is_uppercase("Some Upper, some lower"));
	printf("/1*2-3+4: %d\n", ft_str_is_uppercase("/1*2-3+4"));
}
