/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:46:59 by mintan            #+#    #+#             */
/*   Updated: 2024/03/07 13:44:26 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"ft_strncat.c"

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	char	dest[55] = "abcd";
	char	src[] = "efgh";
	
	printf("Dest: %s\nSrc: %s\n", dest, src);
	printf("Run ft_strncat where n = 6\n");
	ft_strncat(dest, src, 6);
	printf("Updated dest: %s", dest);
}
