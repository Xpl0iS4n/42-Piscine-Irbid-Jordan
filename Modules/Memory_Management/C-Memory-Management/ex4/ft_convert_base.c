/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawalbe <ztawalbe@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 19:43:18 by ztawalbe          #+#    #+#             */
/*   Updated: 2025/09/18 07:47:49 by ztawalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdbool.h>

int		parse_number(char *input, char *digits, int digits_len, int *pos_ptr);
bool	valid_base(char *digits);
int		str_length(char *text);

int	get_size(long value, int base_len)
{
	int	count;

	if (value == 0)
		return (1);
	count = 0;
	if (value < 0)
	{
		count = 1;
		value = -value;
	}
	while (value > 0)
	{
		value /= base_len;
		count++;
	}
	return (count);
}

void	fill_result(char *out, int out_len, long number, char *digits)
{
	int		d_len;

	if (number == 0)
	{
		out[0] = digits[0];
		return ;
	}
	d_len = str_length(digits);
	if (number < 0)
	{
		out[0] = '-';
		number = -number;
	}
	while (number > 0)
	{
		out[out_len] = digits[number % d_len];
		number /= d_len;
		out_len--;
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*converted;
	int		value;
	int		out_len;
	int		from_len;
	int		start;

	if (!valid_base(base_from) || !valid_base(base_to))
		return (NULL);
	start = 0;
	from_len = str_length(base_from);
	value = parse_number(nbr, base_from, from_len, &start);
	out_len = get_size(value, str_length(base_to));
	converted = (char *)malloc(sizeof(char) * (out_len + 1));
	if (!converted)
		return (NULL);
	converted[out_len] = '\0';
	fill_result(converted, out_len - 1, value, base_to);
	return (converted);
}
