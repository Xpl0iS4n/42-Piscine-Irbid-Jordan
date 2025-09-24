/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawalbe <ztawalbe@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 17:34:41 by ztawalbe          #+#    #+#             */
/*   Updated: 2025/09/19 22:14:07 by ztawalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

static int	try_values(t_data *data, int row, int col, int pos)
{
	int	val;

	val = 1;
	while (val <= 4)
	{
		if (is_unique(data, row, col, val)
			&& check_views(data, row, col, val))
		{
			data->grid[row][col] = val;
			if (solve(data, pos + 1))
				return (1);
			data->grid[row][col] = 0;
		}
		val++;
	}
	return (0);
}

int	solve(t_data *data, int pos)
{
	int	row;
	int	col;

	if (pos == 16)
	{
		if (check_final(data))
		{
			print_solution(data);
			return (1);
		}
		return (0);
	}
	row = pos / 4;
	col = pos % 4;
	return (try_values(data, row, col, pos));
}
