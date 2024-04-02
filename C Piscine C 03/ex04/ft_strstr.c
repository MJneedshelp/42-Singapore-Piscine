/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 16:00:00 by mintan            #+#    #+#             */
/*   Updated: 2024/03/13 17:38:29 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* i - counter for the haystack
 * j - counter for the needle
 * Loop within the small while loop if there is a match until all the chars in 
 * the needles are found. If any part of the need is not found break out and
 * move on from where it broke out */
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}	
	return (0);
}
