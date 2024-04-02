/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:16:37 by mintan            #+#    #+#             */
/*   Updated: 2024/03/21 15:53:33 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

#include "ft_strdup.c"

char	*ft_strdup(char *src);

int	main(int argc, char *argv[])
{
	char	*src;
	char	*dup;

//	printf("%d\n", INT_MIN);
//      printf("%d\n", INT_MAX);
	if (argc > 1)
	{
		src = argv[1];
		dup = ft_strdup(src);
		printf("%s\n", dup);
		printf("Memory freed\n");
		free(dup);			//try the free function
		printf("%s\n", dup);
	}
	return (0);	
}
