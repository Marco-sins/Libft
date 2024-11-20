/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 16:09:08 by mmembril          #+#    #+#             */
/*   Updated: 2024/10/03 15:47:22 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_parity(int p)
{
	if (p % 2 == 0)
		p = 1;
	else
		p = -1;
	return (p);
}

int	ft_atoi(const char *str)
{
	unsigned int	num;
	int				i;
	int				p;

	num = 0;
	i = 0;
	p = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (ft_isdigit(str[i]) == 0 && ft_isdigit(str[i + 1]) == 0)
			return (0);
		if (str[i] == '-')
			p--;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	p = ft_parity(p);
	return (p * num);
}
/*int main()
{
	printf ("%d", ft_atoi("000074"));
}*/