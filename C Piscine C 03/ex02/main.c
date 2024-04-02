/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:46:59 by mintan            #+#    #+#             */
/*   Updated: 2024/03/07 12:17:03 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"ft_strcat.c"

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	dest[55] = "abcd";
	char	src[] = "efgh";
	
	printf("Dest: %s\nSrc: %s\n", dest, src);
	printf("Run ft_strcat\n");
	ft_strcat(dest, src);
	printf("Updated dest: %s", dest);
}
