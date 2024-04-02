/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:27:56 by mintan            #+#    #+#             */
/*   Updated: 2024/03/05 12:33:22 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"ft_str_is_alpha.c"

int	ft_char_is_alpha(char c);
int	ft_str_is_alpha(char *str);

int	main(void)
{
	printf("Testing char_is_alpha\n");
	printf("A: %d\n", ft_char_is_alpha('A'));
	printf("z: %d\n", ft_char_is_alpha('z'));
	printf("{: %d\n", ft_char_is_alpha('{'));
	printf(" : %d\n", ft_char_is_alpha(' '));
	printf("Testing str_is_alpha\n");
	printf("qWerTy: %d\n", ft_str_is_alpha("qWerTy"));
	printf("qWer56: %d\n", ft_str_is_alpha("qWer56"));
	printf("/*&>?ty: %d\n", ft_str_is_alpha("/*&>?ty"));
}
