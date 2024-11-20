/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marco <marco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:46:17 by mmembril          #+#    #+#             */
/*   Updated: 2024/09/30 12:42:06 by marco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmeb, size_t size)
{
	char	*ptr;

	ptr = malloc(nmeb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmeb * size);
	return (ptr);
}

/*int main()
{
    char *ptr = (char *)ft_calloc(sizeof(char), 0);
    printf("%s", ptr);
    free(ptr);

    return (0);
}*/
//main de prueba
/*int main()
{
    char *str;
    str = (char *)malloc(sizeof(char) * ft_strlen(str3));
    printf("%c", str[0]);
    str = (char *)calloc(sizeof(char), ft_strlen(str3));
    printf("%c", str[0]);
    void *ptr;
    str = (int *)malloc(sizeof(int) * 5);
    int a = (int)ptr;
    printf("%d\n", a);
    ++ptr;
    printf("%d\n", (int)*ptr);
    if (!str)
        return (0);
    char str2[6];
    str2[0] = 'h' = 104;
    str2[1] = 'e';
    str2[2] = 'l';
    str2[3] = 'l';
    str2[4] = 'o';
    str2[5] = '\0';

    str = (char *)ft_calloc(5,sizeof(char));
    str = "test1328888888888888888888";
    printf("%s", str);
    return(0);
}*/
