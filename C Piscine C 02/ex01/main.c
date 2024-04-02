/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:56:42 by mintan            #+#    #+#             */
/*   Updated: 2024/03/05 11:07:39 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"ft_strncpy.c"

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	*source;
	char	*dest;

	/* Test: source = 12 bytes and n = 12*/
	dest = "overwritten";
	source = "copymachine";
	printf("Test 1: Source = 12 bytes, n = 12\n");
	printf("Source: %s\n", source);
	printf("Original Dest: %s\n", dest);
	printf("Run ft_strncpy\n");
        printf("Copied dest: %s\n", ft_strncpy(&dest, source, 12));
	
	/* Test: source = 12 bytes and n = 4*/ 
	dest = "overwritten";
	source = "copymachine";
	printf("Test 2: Source = 12 bytes, n = 4\n");
	printf("Source: %s\n", source);
	printf("Original Dest: %s\n", dest);
	printf("Run ft_strncpy\n");
        printf("Copied dest: %s\n", ft_strncpy(&dest, source, 4));

	/* Test: source = 12 bytes and n = 16*/
        dest = "overwritten";
        source = "copymachine";
        printf("Test 3: Source = 12 bytes, n = 16\n");
        printf("Source: %s\n", source);
        printf("Original Dest: %s\n", dest);
        printf("Run ft_strncpy\n");
        printf("Copied dest: %s\n", ft_strncpy(&dest, source, 16));
}

