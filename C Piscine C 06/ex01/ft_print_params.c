/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:43:05 by mintan            #+#    #+#             */
/*   Updated: 2024/03/14 11:29:32 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

int	main(int argc, char *argv[])
{
	int	count;

	count = 1;
	if (argc >= 2)
	{
		while (count < argc)
		{
			write(1, &(*argv[count]), ft_strlen(argv[count]));
			write(1, &"\n", 1);
			count++;
		}
	}
	return (0);
}
