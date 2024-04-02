/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:51:12 by mintan            #+#    #+#             */
/*   Updated: 2024/03/20 09:44:38 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include"ft_atoi.c"

int	ft_atoi(char *str);

int	main()
{
	char	str1[] = "nostring";
	char	str2[] = "1234iu";
	char	str3[] = "\r\t---+-1234ab56";
	char	str4[] = "   ++-567ad9";
	char	str5[] = "+-i123";

	printf("Str1: %s converted to integer using atoi:%d\n", str1, atoi(str1));
    printf("Str2: %s converted to integer using atoi: %d\n", str2, atoi(str2));
	printf("Str1: %s converted to integer using ft_atoi: %d\n", str1, ft_atoi(str1));
	printf("Str2: %s converted to integer using ft_atoi: %d\n", str2, ft_atoi(str2));
	printf("Str3: %s converted to integer using ft_atoi: %d\n", str3, ft_atoi(str3));
	printf("Str4: %s converted to integer using ft_atoi: %d\n", str4, ft_atoi(str4));
    printf("Str5: %s converted to integer using ft_atoi: %d\n", str5, ft_atoi(str5));
//	test = str2[1];
//	printf("%d\n", str2[1]);
}
