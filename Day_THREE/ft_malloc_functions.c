/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc_functions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 12:11:17 by mbernard          #+#    #+#             */
/*   Updated: 2023/12/03 12:00:32 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_functions.h"

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *str)
{
	int		len;
	char	*str_dup;

	len = ft_strlen(str);
	str_dup = malloc(sizeof(char) * (len + 1));
	if (str_dup == NULL)
		return (NULL);
	ft_strcpy(str_dup, str);
	return (str_dup);
}

char	**ft_copy_map(char **map)
{
	int	x;
	char **copy;

	x = 0;
	copy = malloc(sizeof(char *) * ft_strlen(map[x] + 1));
	if (!copy)
		return (NULL);
	while (map[x])
	{
		copy[x] = ft_strdup(map[x]);
		x++;
	}
	copy[x] = 0;
	return (copy);
}

