/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 09:28:17 by mintan            #+#    #+#             */
/*   Updated: 2024/03/08 09:39:29 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strlen.c"

int	ft_strlen(char *str);


int	main(void)
{
	char	str[12] = "Qwa12/*ty;o";

	printf("String length of %s: %d", str, ft_strlen("Qwa12/*ty;o"));
}
