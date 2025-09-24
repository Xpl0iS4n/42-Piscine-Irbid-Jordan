/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawalbe <ztawalbe@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 19:42:44 by ztawalbe          #+#    #+#             */
/*   Updated: 2025/09/18 07:51:29 by ztawalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	str_length(char *text)
{
	int	k;

	k = 0;
	while (text[k])
		k++;
	return (k);
}

int	char_in_base(char *digits, char c, int *pos_ptr)
{
	int	k;

	k = 0;
	while (digits[k])
	{
		if (digits[k] == c)
		{
			*pos_ptr = k;
			return (1);
		}
		k++;
	}
	*pos_ptr = -1;
	return (0);
}

long long	int_pow(int base, int exp)
{
	int	k;
	int	result;

	if (exp < 0)
		return (0);
	if (exp == 0)
		return (1);
	result = base;
	k = 1;
	while (k < exp)
	{
		result *= base;
		k++;
	}
	return (result);
}

bool	valid_base(char *digits)
{
	int	len;
	int	i;
	int	j;

	i = -1;
	len = str_length(digits);
	if (!digits || len <= 1)
		return (0);
	if (digits[0] == '-' || digits[0] == '+' || digits[0] == ' '
		|| (digits[0] >= 9 && digits[0] <= 13))
		return (0);
	while (++i < len - 1)
	{
		j = i + 1;
		while (j < len)
		{
			if (digits[j] == '-' || digits[j] == '+' || digits[i] == digits[j]
				|| digits[j] == ' ' || (digits[j] >= 9 && digits[j] <= 13))
				return (false);
			j++;
		}
	}
	return (true);
}

int	parse_number(char *input, char *digits, int digits_len, int *pos_ptr)
{
	int			sign;
	long long	value;
	int			exp;
	int			i;
	int			j;

	sign = 1;
	i = 0;
	while ((input[i] >= 9 && input[i] <= 13) || input[i] == ' ')
		i++;
	while (input[i] == '-' || input[i] == '+')
		if (input[i++] == '-')
			sign = -sign;
	if (!char_in_base(digits, input[i], pos_ptr))
		return (0);
	value = 0;
	j = i;
	exp = -1;
	while (char_in_base(digits, input[i++], pos_ptr))
		exp++;
	while (char_in_base(digits, input[j++], pos_ptr))
		value += (*pos_ptr * int_pow(digits_len, exp--));
	return (value * sign);
}
