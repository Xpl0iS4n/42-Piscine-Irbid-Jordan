/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawalbe <ztawalbe@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 17:34:22 by ztawalbe          #+#    #+#             */
/*   Updated: 2025/09/19 21:52:46 by ztawalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	main(int argc, char **argv)
{
	t_data	data;
	int		i;
	int		j;

	if (argc != 2 || !parse_input(argv[1], &data))
	{
		write(1, "Error\n", 6);
		return (0);
	}
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			data.grid[i][j] = 0;
			j++;
		}
		i++;
	}
	if (!solve(&data, 0))
		write(1, "Error\n", 6);
	return (0);
}
