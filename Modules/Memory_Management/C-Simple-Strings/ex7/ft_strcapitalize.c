/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawalbe <ztawalbe@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 18:24:14 by ztawalbe          #+#    #+#             */
/*   Updated: 2025/09/13 18:56:36 by ztawalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	fword;

	i = 0;
	fword = 1;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (fword && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			fword = 0;
		}
		else
			fword = 1;
		i++;
	}
	return (str);
}
