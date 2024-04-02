/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 09:30:10 by mintan            #+#    #+#             */
/*   Updated: 2024/03/20 10:56:13 by mintan           ###   ########.fr       */
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

/* Used to check if a char is part of a base. Returns the index of the base
 * if found. Otherwise, return -1 */

int	check_include(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	result;
	int	num_neg;
	int	base_len;

	i = 0;
	num_neg = 1;
	result = 0;
	base_len = ft_strlen(base);
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			num_neg = num_neg * -1;
		i++;
	}
	while (check_include(str[i], base) >= 0)
	{
		result = (result * base_len) + check_include(str[i], base);
		i++;
	}
	return (num_neg * result);
}
