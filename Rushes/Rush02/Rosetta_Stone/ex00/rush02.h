/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aibdah <aibdah@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 12:37:33 by aibdah            #+#    #+#             */
/*   Updated: 2025/09/27 12:56:29 by ztawalbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <unistd.h>

unsigned int	ft_atoi(char *str);
char			*ft_ones_to_text(unsigned int num);
char			*ft_teens_to_text(unsigned int num);
char			*ft_tens_to_text(unsigned int num);
void			joined(char *str, char *join);
void			translate(char *str, unsigned int num);
int				str_len(char *str);

#endif
