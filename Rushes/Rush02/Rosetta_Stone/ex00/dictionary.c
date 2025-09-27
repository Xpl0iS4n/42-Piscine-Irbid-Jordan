/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dictionary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibdah <aibdah@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 12:36:46 by aibdah            #+#    #+#             */
/*   Updated: 2025/09/27 12:53:38 by ztawalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*ft_ones_to_text(unsigned int num)
{
	if (num == 1)
		return ("one");
	else if (num == 2)
		return ("two");
	else if (num == 3)
		return ("three");
	else if (num == 4)
		return ("four");
	else if (num == 5)
		return ("five");
	else if (num == 6)
		return ("six");
	else if (num == 7)
		return ("seven");
	else if (num == 8)
		return ("eight");
	else
		return ("nine");
}

char	*ft_teens_to_text(unsigned int num)
{
	if (num == 10)
		return ("ten");
	else if (num == 11)
		return ("eleven");
	else if (num == 12)
		return ("twelve");
	else if (num == 13)
		return ("thirteen");
	else if (num == 14)
		return ("fourteen");
	else if (num == 15)
		return ("fifteen");
	else if (num == 16)
		return ("sixteen");
	else if (num == 17)
		return ("seventeen");
	else if (num == 18)
		return ("eighteen");
	else
		return ("nineteen");
}

char	*ft_tens_to_text(unsigned int num)
{
	if (num >= 90)
		return ("ninety");
	else if (num >= 80)
		return ("eighty");
	else if (num >= 70)
		return ("seventy");
	else if (num >= 60)
		return ("sixty");
	else if (num >= 50)
		return ("fifty");
	else if (num >= 40)
		return ("forty");
	else if (num >= 30)
		return ("thirty");
	else
		return ("twenty");
}
