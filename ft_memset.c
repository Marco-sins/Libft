/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmembril <mmembril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:43:50 by mmembril          #+#    #+#             */
/*   Updated: 2024/09/13 11:06:52 by mmembril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*a;
	int				i;

	i = 0;
	a = s;
	while (n > 0)
	{
		a[i] = c;
		i++;
		n--;
	}
	s = a;
	return (s);
}
/*#include <stdio.h>
int main()
{
    char s[] = "hola mundo";
    ft_memset (s, 65, 1);
    printf("%s", s);
    return (0);
}*/
