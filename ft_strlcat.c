/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmembril <mmembril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 15:43:48 by mmembril          #+#    #+#             */
/*   Updated: 2024/10/02 21:29:37 by mmembril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*s;
	size_t	i;
	size_t	j;
	size_t	lend;
	size_t	lens;

	s = (char *)src;
	j = 0;
	i = 0;
	lend = ft_strlen(dst);
	lens = ft_strlen(s);
	if (size > lend)
		j = lens + lend;
	else
		j = lens + size;
	while (s[i] && (lend + 1) < size)
	{
		dst[lend] = s[i];
		lend++;
		i++;
	}
	dst[lend] = '\0';
	return (j);
}
/*
int main()
{
    char dest[14] = "a";
    printf("%d", (int)ft_strlcat(dest, "lorem ipsum dolor sit amet", 15));
    write(1, "\n", 1);
    write(1, dest, 14);
}*/
