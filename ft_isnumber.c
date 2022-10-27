/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnumber.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:43:33 by dbrandao          #+#    #+#             */
/*   Updated: 2022/10/27 17:45:08 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	pass_spaces(char **str)
{
    while (ft_isspace(**str))
        (*str)++;
}

static int	is_sign(char c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

static int	is_number(char *str)
{
	if (!str)
		return (0);
	if (is_sign(*str))
		str++;
	while (ft_isdigit(*str))
		str++;
	if (!ft_isspace(*str) && *str != '\0')
		return (0);
	return (1);
}

char	*ft_isnumber(char *str)
{
    if (!str)
        return (NULL);
    pass_spaces(&str);
    if (!ft_isdigit(*str) && !is_sign(*str))
		return (NULL);
	if (is_number(str))
		return (str);
	return (NULL);
}
