/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibdah <aibdah@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 12:37:44 by aibdah            #+#    #+#             */
/*   Updated: 2025/09/27 13:18:12 by ztawalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	main(int argc, char *argv[])
{
	unsigned int	x;
	char			str[50];

	str[0] = '\0';
	if (argc > 1)
	{
		x = ft_atoi(argv[1]);
		if (x == (unsigned int)(-1))
			write(1, "Error\n", 6);
		else if (x == 0)
			joined("Zero", str);
		else
			translate(str, x);
		write(1, str, str_len(str));
		write(1, "\n", 1);
	}
	return (0);
}
