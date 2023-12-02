/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <mbernard@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 17:00:05 by mbernard          #+#    #+#             */
/*   Updated: 2023/12/02 16:14:35 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "trebuchet.h"

char	ft_str_to_num(const char *str)
{
	if (!ft_strncmp(str, "one", 3))
		return ('1');
	else if (!ft_strncmp(str, "two", 3))
		return ('2');
	else if (!ft_strncmp(str, "three", 5))
		return ('3');
	else if (!ft_strncmp(str, "four", 4))
		return ('4');
	else if (!ft_strncmp(str, "five", 4))
		return ('5');
	else if (!ft_strncmp(str, "six", 3))
		return ('6');
	else if (!ft_strncmp(str, "seven", 5))
		return ('7');
	else if (!ft_strncmp(str, "eight", 5))
		return ('8');
	else if (!ft_strncmp(str, "nine", 4))
		return ('9');
	return ('0');
}

int	ft_str_is_num(const char *str)
{
	if (!ft_strncmp(str, "one", 3))
		return (1);
	if (!ft_strncmp(str, "two", 3))
		return (1);
	if (!ft_strncmp(str, "three", 5))
		return (1);
	if (!ft_strncmp(str, "four", 4))
		return (1);
	if (!ft_strncmp(str, "five", 4))
		return (1);
	if (!ft_strncmp(str, "six", 3))
		return (1);
	if (!ft_strncmp(str, "seven", 5))
		return (1);
	if (!ft_strncmp(str, "eight", 5))
		return (1);
	if (!ft_strncmp(str, "nine", 4))
		return (1);
	return (0);
}

char	ft_numchr(const char *s)
{
	char	*ptr;

	ptr = (char *)s;
	while (!(ft_isdigit(*ptr)))
	{
		if (ft_str_is_num(ptr))
			return (ft_str_to_num(ptr));
		if (*ptr == '\0')
			return ('\0');
		ptr++;
	}
	return (*ptr);
}

char	ft_numrchr(const char *s)
{
	int		x;
	char	*ptr;

	x = ft_strlen(s);
	ptr = (char *)s;
	while (x >= 0)
	{
		if (ft_isdigit(ptr[x]))
			return (ptr[x]);
		if (ft_str_is_num(ptr + x))
			return (ft_str_to_num(ptr + x));
		x--;
	}
	return ('\0');
}

int	main(void)
{
	int		sum;
	char	first[2];
	char	**set;

	sum = 0;
	set = ft_split(one, ' ');
	while (*set)
	{
		first[0] = ft_numchr(*set);
		first[1] = ft_numrchr(*set);
		sum += ft_atoi(first);
		set++;
	}
	ft_putnbr_fd(sum, 1);
	return (0);
}
