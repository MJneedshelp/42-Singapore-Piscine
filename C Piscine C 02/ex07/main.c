/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:27:56 by mintan            #+#    #+#             */
/*   Updated: 2024/03/05 17:14:55 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"ft_strupcase.c"

int	ft_char_is_lowercase(char c);
char	*ft_strupcase(char *str);

int	main(void)
{
	char	str1[] = "all in lower";
	char	str2[] = "Some are in CAPS";
	char	str3[] = "Some are with $Pecia! chars?!";

	printf("Testing ft_strupcase\n");
	printf("Original string:\n%s\n%s\n%s\n", str1, str2, str3);
	printf("Run f_strupcase\n");
        ft_strupcase(str1);
	ft_strupcase(str2);
	ft_strupcase(str3);
	printf("Updated:\n%s\n%s\n%s\n", str1, str2, str3); 
}
