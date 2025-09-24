/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawalbe <ztawalbe@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 17:34:26 by ztawalbe          #+#    #+#             */
/*   Updated: 2025/09/19 21:53:40 by ztawalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush01.h"

static int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int	parse_input(char *str, t_data *data)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (*str)
	{
		if (is_digit(*str))
		{
			if (*str < '1' || *str > '4' || count >= 16)
				return (0);
			data->views[count] = *str - '0';
			count++;
			str++;
		}
		else if (*str == ' ')
			str++;
		else
			return (0);
	}
	return (count == 16);
}
