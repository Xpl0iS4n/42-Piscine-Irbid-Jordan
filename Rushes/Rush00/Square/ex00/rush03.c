/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rajarada <rajarada@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 13:26:36 by rajarada          #+#    #+#             */
/*   Updated: 2025/09/13 09:18:17 by ztawalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_char(int i, int j, int x, int y)
{
	if (j == 1 && (i == 1 || i == x))
		ft_putchar('A');
	else if (j == y && (i == 1 || i == x))
		ft_putchar('C');
	else if (i == 1 || i == x || j == 1 || j == y)
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush03(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			print_char(i, j, y, x);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
