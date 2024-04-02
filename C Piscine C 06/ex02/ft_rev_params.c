/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:49:09 by mintan            #+#    #+#             */
/*   Updated: 2024/03/14 23:01:10 by mintan           ###   ########.fr       */
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

	count = argc;
	if (argc >= 2)
	{
		while (count > 1)
		{
			write(1, argv[count - 1], ft_strlen(argv[count - 1]));
			write(1, "\n", 1);
			count--;
		}
	}
	return (0);
}
