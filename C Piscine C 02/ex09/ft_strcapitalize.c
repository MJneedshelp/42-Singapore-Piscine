/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 18:00:00 by mintan            #+#    #+#             */
/*   Updated: 2024/03/06 16:54:47 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Function to check if the a character is a alphanumeric. Returns 1 if 
 * alphanumeric and 0 if not*/

int	check_char(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	next;

	i = 0;
	next = 1;
	while (str[i + 1] != '\0')
	{
		if (next == 1 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
		}
		else if (next == 0 && (str[i] >= 'A' && str[i] <= 'Z'))
		{
			str[i] += 32;
		}
		if (check_char(str[i]) == 0)
			next = 1;
		else
			next = 0;
		i++;
	}
	return (str);
}
