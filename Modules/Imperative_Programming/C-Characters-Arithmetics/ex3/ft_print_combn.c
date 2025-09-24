/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawalbe <ztawalbe@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 07:36:42 by ztawalbe          #+#    #+#             */
/*   Updated: 2025/09/11 20:16:35 by ztawalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_digits(int *digits, int n)
{
	int	i;

	i = 0;
	while (i < n)
		ft_putchar(digits[i++] + '0');
	if (digits[0] != 10 - n)
		write(1, ", ", 2);
}

void	ft_print_combn(int n)
{
	int	digits[10];
	int	i;

	if (n <= 0 || n >= 10)
		return ;
	i = 0;
	while (i < n)
	{
		digits[i] = i;
		i++;
	}
	while (1)
	{
		print_digits(digits, n);
		i = n - 1;
		while (i >= 0 && digits[i] == 9 - (n - 1 - i))
			i--;
		if (i < 0)
			break ;
		digits[i]++;
		while (++i < n)
			digits[i] = digits[i - 1] + 1;
	}
}
