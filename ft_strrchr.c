/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 11:57:57 by mmembril          #+#    #+#             */
/*   Updated: 2024/10/03 12:07:17 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ret;
	int		i;

	ret = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			ret = &((char *)s)[i];
		i++;
	}
	if (s[i] == (char)c)
		ret = &((char *)s)[i];
	if (c == '\0')
		ret = &((char *)s)[i];
	return (ret);
}
/*int main()
{
    printf("%s", ft_strrchr("hola mzundo con z", 122));
    return (0);
}*/
