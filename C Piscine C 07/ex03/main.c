/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:37:13 by mintan            #+#    #+#             */
/*   Updated: 2024/03/18 14:17:28 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strjoin.c"

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char	*strs[] = {"str1", "str2", "str3"};
	char	sep[] = " | ";
	
	printf("Joined string: %s\n", ft_strjoin(3, strs, sep));
	return (0);
}
