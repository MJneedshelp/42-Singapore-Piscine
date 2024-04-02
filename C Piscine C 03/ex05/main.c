/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:46:59 by mintan            #+#    #+#             */
/*   Updated: 2024/03/07 21:13:22 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"ft_strlcat.c"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	dest[8] = "abcd";
	char	src[] = "efgh";
	unsigned int	x;

	printf("Dest: %s\nSrc: %s\n", dest, src);
	printf("Run ft_strlcat where size = 8\n");
	x = ft_strlcat(dest, src, 8);
	printf("ft_strlcat | Updated dest: %s of size: %d\n", dest, x);
}
