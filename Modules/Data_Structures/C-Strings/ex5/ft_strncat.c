/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ztawalbe <ztawalbe@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 16:12:55 by ztawalbe          #+#    #+#             */
/*   Updated: 2025/09/21 16:27:14 by ztawalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*ret;
	unsigned int	i;

	ret = dest;
	while (*dest)
		dest++;
	i = 0;
	while (src[i] && i < nb)
	{
		*dest = src[i];
		dest++;
		i++;
	}
	*dest = '\0';
	return (ret);
}
