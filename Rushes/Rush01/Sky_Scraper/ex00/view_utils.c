/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   view_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawalbe <ztawalbe@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 22:00:57 by ztawalbe          #+#    #+#             */
/*   Updated: 2025/09/19 22:36:07 by ztawalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	count_visible(int *line)
{
	int	max;
	int	count;
	int	i;

	max = 0;
	count = 0;
	i = 0;
	while (i < 4)
	{
		if (line[i] > max)
		{
			max = line[i];
			count++;
		}
		i++;
	}
	return (count);
}

void	copy_row(t_data *data, int row, int *line)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		line[i] = data->grid[row][i];
		i++;
	}
}

void	copy_row_rev(t_data *data, int row, int *line)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		line[i] = data->grid[row][3 - i];
		i++;
	}
}

void	copy_col(t_data *data, int col, int *line)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		line[i] = data->grid[i][col];
		i++;
	}
}

void	copy_col_rev(t_data *data, int col, int *line)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		line[i] = data->grid[3 - i][col];
		i++;
	}
}
