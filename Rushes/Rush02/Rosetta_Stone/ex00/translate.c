/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_translate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibdah <aibdah@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 12:37:17 by aibdah            #+#    #+#             */
/*   Updated: 2025/09/27 12:54:08 by ztawalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

static void	handle_tens(char *str, unsigned int num)
{
	joined(ft_tens_to_text(num), str);
	translate(str, (num % 10));
}

static void	handle_hundreds(char *str, unsigned int num)
{
	translate(str, (num / 100));
	joined("hundred", str);
	translate(str, (num % 100));
}

static void	handle_thousands(char *str, unsigned int num)
{
	translate(str, (num / 1000));
	joined("thousand", str);
	translate(str, (num % 1000));
}

static void	handle_millions(char *str, unsigned int num)
{
	translate(str, (num / 1000000));
	joined("million", str);
	translate(str, (num % 1000000));
}

void	translate(char *str, unsigned int num)
{
	if (num == 0)
		return ;
	else if (num < 10)
		joined(ft_ones_to_text(num), str);
	else if (num >= 10 && num <= 19)
		joined(ft_teens_to_text(num), str);
	else if (num < 100)
		handle_tens(str, num);
	else if (num < 1000)
		handle_hundreds(str, num);
	else if (num < 1000000)
		handle_thousands(str, num);
	else if (num < 1000000000)
		handle_millions(str, num);
}
