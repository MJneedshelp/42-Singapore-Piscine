/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:46:59 by mintan            #+#    #+#             */
/*   Updated: 2024/03/11 10:27:26 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"ft_strncmp.c"
#include<string.h>

//int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	str1[] = "abcd qwe";
	char	str2[] = "abcd zty";
	
	printf("String 1: %s\nString 2: %s\n", str1, str2);
	printf("Compare %s and %s | n = 4. Result: %d\n", str1, str2, ft_strncmp(str1, str2, 4));
	printf("Compare %s and %s.| n = 6. Result: %d\n", str1, str2, ft_strncmp(str1, str2, 6));
	printf("Compare %s and %s.| n = 6. Result: %d\n", str2, str1, ft_strncmp(str2, str1, 6));
        printf("Compare %s and %s.| n = 0. Result: %d\n", str2, str1, ft_strncmp(str2, str1, 0));
        printf("Compare and i.| n = 1. Result: %d\n", ft_strncmp("", "i", 1));
	printf("Compare %s and %s.| n = 6. Result: %d\n", str2, str1, strncmp(str2, str1, 4));
        printf("Compare %s and %s.| n = 6. Result: %d\n", str1, str2, strncmp(str1, str2, 6));
        printf("Compare %s and %s.| n = 6. Result: %d\n", str2, str1, strncmp(str2, str1, 6));
        printf("Compare and i.| n = 1. Result: %d\n", strncmp("", "i", 1));


}
