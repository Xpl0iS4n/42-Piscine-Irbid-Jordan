/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawalbe <ztawalbe@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 21:51:12 by ztawalbe          #+#    #+#             */
/*   Updated: 2025/09/19 21:51:21 by ztawalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	is_unique(t_data *data, int row, int col, int val)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (data->grid[row][i] == val || data->grid[i][col] == val)
			return (0);
		i++;
	}
	return (1);
}

int	check_final(t_data *data)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (!check_row_views(data, i) || !check_col_views(data, i))
			return (0);
		i++;
	}
	return (1);
}
