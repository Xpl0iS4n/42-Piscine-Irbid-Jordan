/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawalbe <ztawalbe@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 07:57:59 by ztawalbe          #+#    #+#             */
/*   Updated: 2025/09/14 08:00:23 by ztawalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	a;
	int	d;

	i = 0;
	a = 1;
	d = 1;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			a = 0;
		if (f(tab[i], tab[i + 1]) < 0)
			d = 0;
		i++;
	}
	if (a || d)
		return (1);
	return (0);
}
