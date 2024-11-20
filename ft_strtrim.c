/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmembril <mmembril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 21:35:42 by mmembril          #+#    #+#             */
/*   Updated: 2024/09/21 12:22:20 by mmembril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		end;
	int		beg;
	int		i;

	i = 0;
	beg = 0;
	end = ft_strlen((char *)s1);
	while (set[i] != '\0')
	{
		if (s1[beg] == set[i])
		{
			beg++;
			i = -1;
		}
		if (s1[end - 1] == set[i])
		{
			end--;
			i = -1;
		}
		i++;
	}
	str = ft_substr(s1, beg, (end - beg));
	return (str);
}
/*
int main(void)
{
    char *p = ft_strtrim("hola mundo", "odhn");
    printf ("%s", p);
    free (p);
    return (0);
}*/
