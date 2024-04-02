/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:27:56 by mintan            #+#    #+#             */
/*   Updated: 2024/03/05 17:26:56 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"ft_strlowcase.c"

int	ft_char_is_uppercase(char c);
char	*ft_strlowcase(char *str);

int	main(void)
{
	char	str1[] = "all in lower";
	char	str2[] = "Some are in CAPS";
	char	str3[] = "Some are with $Pecia! chars?!";

	printf("Testing ft_strlowcase\n");
	printf("Original string:\n%s\n%s\n%s\n", str1, str2, str3);
	printf("Run f_strlowcase\n");
        ft_strlowcase(str1);
	ft_strlowcase(str2);
	ft_strlowcase(str3);
	printf("Updated:\n%s\n%s\n%s\n", str1, str2, str3); 
}
