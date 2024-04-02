/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:46:59 by mintan            #+#    #+#             */
/*   Updated: 2024/03/06 17:29:17 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"ft_strcmp.c"

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	str1[] = "abcd";
	char	str2[] = "abcd";
	char	str3[] = "aBcD";
	
	printf("String 1: %s\nString 2: %s\nString 3: %s\n", str1, str2, str3);
	printf("Compare %s and %s. Result: %d\n", str1, str2, ft_strcmp(str1, str2));
	printf("Compare %s and %s. Result: %d\n", str1, str3, ft_strcmp(str1, str3));
	printf("Compare %s and %s. Result: %d\n", str3, str1, ft_strcmp(str3, str1));

}
