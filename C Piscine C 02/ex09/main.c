/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:27:56 by mintan            #+#    #+#             */
/*   Updated: 2024/03/06 12:18:30 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"ft_strcapitalize.c"

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	str[] = "salut, coMMent tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("Testing ft_strcapitalize\n");
	printf("Original string:\n%s\n", str);
	printf("Run ft_strcapitalize\n");
        ft_strcapitalize(str);
	printf("Updated:\n%s", str); 
}
