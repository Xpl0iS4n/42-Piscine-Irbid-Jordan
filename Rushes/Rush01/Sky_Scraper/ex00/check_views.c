/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_views.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawalbe <ztawalbe@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 17:34:38 by ztawalbe          #+#    #+#             */
/*   Updated: 2025/09/19 22:34:46 by ztawalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

int	check_row(int grid[4][4], int row, int *views)
{
	int	line[4];
	int	i;

	i = 0;
	while (i < 4)
	{
		line[i] = grid[row][i];
		i++;
	}
	if (count_visible(line) != views[8 + row])
		return (0);
	i = 0;
	while (i < 4)
	{
		line[i] = grid[row][3 - i];
		i++;
	}
	if (count_visible(line) != views[12 + row])
		return (0);
	return (1);
}

int	check_col(int grid[4][4], int col, int *views)
{
	int	line[4];
	int	i;

	i = 0;
	while (i < 4)
	{
		line[i] = grid[i][col];
		i++;
	}
	if (count_visible(line) != views[col])
		return (0);
	i = 0;
	while (i < 4)
	{
		line[i] = grid[3 - i][col];
		i++;
	}
	if (count_visible(line) != views[4 + col])
		return (0);
	return (1);
}
