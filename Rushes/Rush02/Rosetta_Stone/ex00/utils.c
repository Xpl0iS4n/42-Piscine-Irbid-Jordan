/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibdah <aibdah@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 12:37:54 by aibdah            #+#    #+#             */
/*   Updated: 2025/09/27 12:55:01 by ztawalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

unsigned int	ft_atoi(char *str)
{
	unsigned int	i;
	unsigned int	num;

	i = 0;
	num = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '.' || str[i] == '-')
			return (-1);
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num);
}

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	joined(char *str, char *join)
{
	int	i;
	int	j;

	i = 0;
	while (join[i] != '\0')
		i++;
	if (i != 0)
		join[i++] = ' ';
	j = 0;
	while (str[j] != '\0')
	{
		join[i] = str[j];
		i++;
		j++;
	}
	join[i] = '\0';
}
