/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmembril <mmembril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:12:18 by mmembril          #+#    #+#             */
/*   Updated: 2024/09/13 11:06:22 by mmembril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*a;
	int				i;

	i = 0;
	a = s;
	while (n > 0)
	{
		a[i] = '\0';
		i++;
		n--;
	}
	s = a;
}

/*#include <stdio.h>
int main()
{
    char s[] = "hola mundo";
    ft_bzero (s, 1);
    printf("%s", s);
    return (0);
}*/
