/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawalbe <ztawalbe@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 21:59:14 by ztawalbe          #+#    #+#             */
/*   Updated: 2025/09/19 22:25:37 by ztawalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	check_row_views(t_data *data, int row)
{
	int	line[4];
	int	i;

	copy_row(data, row, line);
	if (count_visible(line) != data->views[8 + row])
		return (0);
	copy_row_rev(data, row, line);
	if (count_visible(line) != data->views[12 + row])
		return (0);
	return (1);
}

int	check_col_views(t_data *data, int col)
{
	int	line[4];
	int	i;

	copy_col(data, col, line);
	if (count_visible(line) != data->views[col])
		return (0);
	copy_col_rev(data, col, line);
	if (count_visible(line) != data->views[4 + col])
		return (0);
	return (1);
}

int	check_views(t_data *data, int row, int col, int val)
{
	data->grid[row][col] = val;
	if (row == 3 && !check_col_views(data, col))
	{
		data->grid[row][col] = 0;
		return (0);
	}
	if (col == 3 && !check_row_views(data, row))
	{
		data->grid[row][col] = 0;
		return (0);
	}
	data->grid[row][col] = 0;
	return (1);
}
