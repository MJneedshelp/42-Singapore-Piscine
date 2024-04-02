/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:56:42 by mintan            #+#    #+#             */
/*   Updated: 2024/03/05 09:42:32 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"ft_strcpy.c"

char	*ft_strcpy(char *dest, char *src);

int	main(void)
{
	char	*source;
//	char	dest[5];

	char	*dest;
	dest = "overwritten";

	source = "copymachine";
//	dest = "n";
	printf("Source: %s\n", source);
	printf("Original Dest: %s\n", dest);
	printf("Run ft_strcpy\n");
//	printf("Test dest: %s\n", ft_strcpy(&dest[5], source));
        printf("Copied dest: %s\n", ft_strcpy(&dest, source));
	
}
