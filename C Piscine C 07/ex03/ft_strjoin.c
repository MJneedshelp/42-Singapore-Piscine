/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:48:07 by mintan            #+#    #+#             */
/*   Updated: 2024/03/21 16:11:33 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

/*Finds the original string length of dest to start appending the src from that
 * position.*/

char	*ft_strcat(char *dest, char *src)
{
	int	dest_len;
	int	i;

	i = 0;
	dest_len = ft_strlen(dest);
	while (src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest);
}

int	find_total_len(int size, char **strs, char *sep)
{
	int	total_len;
	int	i;

	i = 0;
	total_len = 0;
	while (i < size)
	{
		if (i == size - 1)
			total_len += ft_strlen(strs[i]) + 1;
		else
			total_len += ft_strlen(strs[i]) + ft_strlen(sep);
		i++;
	}
	return (total_len);
}

/*	Step through each cell in the array and get the string len.
*	Add the string len + separator len to the total len
*	do that until the last str in the array. The total len should not a sep at
*	the end and should include the null termnator */

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_len;
	int		i;
	char	*j_string;

	i = 0;
	if (size == 0)
	{
		j_string = (char *)malloc(1 * sizeof(char));
		j_string[i] = '\0';
		return (j_string);
	}
	total_len = find_total_len(size, strs, sep);
	j_string = (char *)malloc(total_len * sizeof(char));
	j_string[i] = '\0';
	while (i < size - 1)
	{
		j_string = ft_strcat(j_string, strs[i]);
		j_string = ft_strcat(j_string, sep);
		i++;
	}
	j_string = ft_strcat(j_string, strs[i]);
	return (j_string);
}
