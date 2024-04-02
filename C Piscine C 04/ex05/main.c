/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 11:51:12 by mintan            #+#    #+#             */
/*   Updated: 2024/03/20 10:54:52 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_atoi_base.c"

int	ft_atoi_base(char *str, char *base);

int	main()
{
	char	base[] = "0123456789ABCDEF";
	char	str1[] = "nostring";
	char	str2[] = "6A";
	char	str3[] = "\r\t---+-7asdmab56";
	char	str4[] = "   ++-7CEcad9";
	char	str5[] = "+-79Ecaccf";

	printf("Str1: %s converted to integer using ft_atoi: %d\n", str1, ft_atoi_base(str1, base));
	printf("Str2: %s converted to integer using ft_atoi: %d\n", str2, ft_atoi_base(str2, base));
	printf("Str3: %s converted to integer using ft_atoi: %d\n", str3, ft_atoi_base(str3, base));
	printf("Str4: %s converted to integer using ft_atoi: %d\n", str4, ft_atoi_base(str4, base));
    printf("Str5: %s converted to integer using ft_atoi: %d\n", str5, ft_atoi_base(str5, base));
//	test = str2[1];
//	printf("%d\n", str2[1]);
}
