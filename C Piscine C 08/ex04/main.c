/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mintan <mintan@student.42singapore.sg      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 16:05:10 by mintan            #+#    #+#             */
/*   Updated: 2024/03/21 15:05:45 by mintan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"
#include "ft_strs_to_tab.c"
#include "ft_show_tab.c"

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av);

int	main(void)
{
	char	*av[3] = {"Tom", "Dick", "Harry"};
	t_stock_str	*ptr;
	
	ptr = ft_strs_to_tab(3, (av));
	ft_show_tab(ptr);
	free (ptr);
	//Supposed to run into segmentation fault here since the memory is freed
	//already
	ft_show_tab(ptr);
	return (0);

}
