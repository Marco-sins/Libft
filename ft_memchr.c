/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:12:56 by mmembril          #+#    #+#             */
/*   Updated: 2024/10/03 09:56:19 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	a;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	a = (unsigned char)c;
	while (n > i)
	{
		if (*str == a)
			return (str);
		i++;
		str++;
	}
	return (NULL);
}
/*int main()
{
    char s[] = "holza mundo con z";
    printf("%p", ft_memchr(s, 122, 5));
    return (0);
}*/
