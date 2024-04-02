/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:27:56 by mintan            #+#    #+#             */
/*   Updated: 2024/03/07 12:49:15 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"ft_str_is_printable.c"

int	ft_char_is_printable(char c);
int	ft_str_is_printable(char *str);

int	main(void)
{
	printf("Testing char_is_printable\n");
	printf("Test ASCII number 97: %d\n", ft_str_is_printable('\97'));
	printf("Test ASCII number 31: %d\n", ft_str_is_printable('\31'));
}
