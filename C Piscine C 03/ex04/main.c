/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:11:58 by mintan            #+#    #+#             */
/*   Updated: 2024/03/11 10:48:17 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strstr.c"

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	haystack1[11] = "xllxxlolx";
	char	needle1[4] = "lol";
	char	*ret1;
	char	haystack2[11] = "xllxxlolx";
	char	needle2[2] = "ha";
	char	*ret2;
	char	*ret3;

	printf("Find needle 1: %s in the haystack 1: %s\n", needle1, haystack1);
	ret1 = ft_strstr(haystack1, needle1);
	printf("Result 1: %s\n", ret1);
	
        printf("Find needle 2: %s in the haystack 2: %s\n", needle2, haystack2);
        ret2 = ft_strstr(haystack2, needle2);
        printf("Result 2: %s\n", ret2);
	
        printf("Find needle 3:  in the haystack 2: %s\n", haystack2);
        ret3 = ft_strstr(haystack2, "");
        printf("Result 3: %s\n", ret3);

	return (0);	
}
