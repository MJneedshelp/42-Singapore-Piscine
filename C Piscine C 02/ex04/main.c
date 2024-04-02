/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:27:56 by mintan            #+#    #+#             */
/*   Updated: 2024/03/05 13:11:03 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"ft_str_is_lowercase.c"

int	ft_char_is_lowercase(char c);
int	ft_str_is_lowercase(char *str);

int	main(void)
{
	printf("Testing char_is_lowercase\n");
	printf("a: %d\n", ft_char_is_lowercase('a'));
	printf("g: %d\n", ft_char_is_lowercase('g'));
	printf(":: %d\n", ft_char_is_lowercase(':'));
	printf("P: %d\n", ft_char_is_lowercase('P'));
	printf("Testing str_is_lowercase\n");
	printf("allinlowercase: %d\n", ft_str_is_lowercase("allinlowercase"));
	printf("Some Upper, some lower: %d\n", ft_str_is_lowercase("Some Upper, some lower"));
	printf("/1*2-3+4: %d\n", ft_str_is_lowercase("/1*2-3+4"));
}
