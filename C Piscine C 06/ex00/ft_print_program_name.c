/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 18:16:58 by mintan            #+#    #+#             */
/*   Updated: 2024/03/15 09:34:15 by mintan           ###   ########.fr       */
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
	char	*prog_name;

	if (argc >= 1)
	{
		prog_name = argv[0];
		write(1, &(*prog_name), ft_strlen(prog_name));
		write(1, &"\n", 1);
	}
	return (0);
}
