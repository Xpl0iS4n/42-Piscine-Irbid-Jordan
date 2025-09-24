/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawalbe <ztawalbe@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 17:34:08 by ztawalbe          #+#    #+#             */
/*   Updated: 2025/09/19 22:36:34 by ztawalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH01_H
# define RUSH01_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_data
{
	int	grid[4][4];
	int	views[16];
}	t_data;

int		parse_input(char *str, t_data *data);
void	print_solution(t_data *data);
int		solve(t_data *data, int pos);
int		is_unique(t_data *data, int row, int col, int val);
int		check_views(t_data *data, int row, int col, int val);
int		check_final(t_data *data);
int		check_row_views(t_data *data, int row);
int		check_col_views(t_data *data, int col);

int		count_visible(int *line);
void	copy_row(t_data *data, int row, int *line);
void	copy_row_rev(t_data *data, int row, int *line);
void	copy_col(t_data *data, int col, int *line);
void	copy_col_rev(t_data *data, int col, int *line);

#endif
