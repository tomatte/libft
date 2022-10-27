/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:04:00 by dbrandao          #+#    #+#             */
/*   Updated: 2022/10/27 17:25:00 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isspace(char c)
{
    if (c == ' ' || c == '\f' || c == '\n'
		|| c == '\r' || c == '\t' || c == '\v')
    {
        return (1);
    }
    return (0);
}
