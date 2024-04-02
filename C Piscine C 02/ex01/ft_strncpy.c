/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 09:57:07 by mintan            #+#    #+#             */
/*   Updated: 2024/03/06 16:34:19 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Copies a string pointed to by the source for at most n bytes of source.
 * The first loop while loop describes the behaviour to copy until the NULL
 * before n bytes is reached. The second loop writes additional null bytes to
 * the dest up to n bytes to ensure that a total of n bytes are written*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
