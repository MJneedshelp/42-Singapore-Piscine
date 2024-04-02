/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 11:49:09 by mintan            #+#    #+#             */
/*   Updated: 2024/03/20 15:55:39 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	if (s1[i] != s2[i])
	{
		return (s1[i] - s2[i]);
	}
	else
	{
		return (0);
	}
}

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

void	swap_pointers(char *argv[], int arr_len)
{
	int		i;
	int		j;
	char	*tmp_ptr;

	i = 1;
	while (i < arr_len)
	{
		j = i + 1;
		while (j < arr_len)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				tmp_ptr = argv[j];
				argv[j] = argv[i];
				argv[i] = tmp_ptr;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	count;
	int	i;

	i = 0;
	count = argc;
	if (argc >= 2)
	{
		swap_pointers(argv, argc);
		while (i < count)
		{
			write(1, argv[i], ft_strlen(argv[i]));
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
