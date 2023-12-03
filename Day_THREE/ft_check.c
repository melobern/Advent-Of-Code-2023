/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 10:55:37 by mbernard          #+#    #+#             */
/*   Updated: 2023/12/03 12:31:07 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gear_ratios.h"

int     ft_give_num(const char *str, int y)
{
       	int	nb;

        nb = 0;
        while (!(ft_isdigit(str[y])))
			y++;
        while (ft_isdigit(str[y]))
        {
                nb = nb * 10 + (str[y] - '0');
                y++;
        }
        return (nb);
}

int	ft_near_symbol(char **matrix, int x, int y, int num_len)
{
	int	line;

	line = 0;
	x = x - 1;
	y = y - 1;
	if (x < 0)
	{
		x = 0;
		line = 1;
	}
	if (y < 0)
		y = 0;
	while (line++ < 3)
	{
		if (ft_check_line(matrix[x], x, y, num_len))
			return (1);
		return (0);
	}
}

int	ft_check_line(char *matrix, int x, int y, int num_len)
{
	if (matrix)
	{
		while (matrix[x] && y < num_len + 2)
		{
			if (!(ft_isdigit(matrix[y])) && !(matrix[y] == '.'))
				return (1);
			y++;
		}
	}
	x++;
	return (0);
}

int	ft_num_len();
int	main(void)
{
	int	result;
	char	**matrix;

	matrix = ft_split(test, 'N');
	result = 0;
	while (matrix[x][y])
	{
		if (ft_near_symbol(num))
			result += num;
	}
	ft_putnbr_fd(result, 1);
	return (0);
}
