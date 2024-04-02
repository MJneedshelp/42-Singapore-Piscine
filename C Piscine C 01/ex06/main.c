/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 17:58:49 by mintan            #+#    #+#             */
/*   Updated: 2024/03/04 15:57:01 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include"ft_strlen.c"

int	ft_strlen(char *str);

int	main(void)
{
	printf("What is the meaning to life?: %d char", ft_strlen("What is the meaning to life?"));
}
