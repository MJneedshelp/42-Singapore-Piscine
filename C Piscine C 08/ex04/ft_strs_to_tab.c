/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 15:57:22 by mintan            #+#    #+#             */
/*   Updated: 2024/03/21 15:02:16 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h" 
#include <stdlib.h>

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

/* If the pointer is NULL, return it as a NULL pointer*/
char	*ft_strdup(char *src)
{
	char	*ptr;
	int		size;
	int		i;

	i = 0;
	size = ft_strlen(src) + 1;
	ptr = (char *)malloc(size * sizeof (char));
	if (ptr != NULL)
	{
		while (src[i] != 0)
		{
			ptr[i] = src[i];
			i++;
		}
		ptr[i] = '\0';
	}
	return (ptr);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*tab;
	int			i;

	i = 0;
	tab = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if (tab == NULL)
		return (tab);
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = 0;
	return (tab);
}
