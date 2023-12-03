/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gear_ratios.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 10:55:37 by mbernard          #+#    #+#             */
/*   Updated: 2023/12/03 22:53:55 by mbernard         ###   ########.fr       */
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
	ft_putnbr_fd(nb, 1);
	write(1, "\n",1);
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
		if (ft_check_line(matrix[x], y, num_len))
			return (1);
		x++;
	}
	return (0);
}

int	ft_check_line(char *matrix, int y, int num_len)
{
	int s_y;

	s_y = y + 2;
	if (matrix)
	{
		while (matrix[y] && y <= num_len + s_y)
		{
			if (!(ft_isdigit(matrix[y])) && !(matrix[y] == '.'))
				return (1);
			y++;
		}
	}
	return (0);
}

int	ft_num_len(char *matrix, int y)
{
	int len;

	len = 0;
	if (matrix)
	{
		while (ft_isdigit(matrix[y]))
		{
			len++;
			y++;
		}
	}
	return (len);
}
int	main(void)
{
	int	result;
	char	**matrix;
	int	x;
	int	y;
	int	num_len;

	matrix = ft_split(gear, 'N');
	result = 0;
	x = 0;
	while (matrix[x])
	{
		y = 0;
		while (matrix[x][y])
		{
			if (ft_isdigit(matrix[x][y]))
			{
				num_len = ft_num_len(matrix[x], y);
				if (ft_near_symbol(matrix, x, y, num_len))
					result += ft_give_num(matrix[x], y);
				y += num_len - 1;
			}
			y++;
		}
		x++;
	}
	ft_putnbr_fd(result, 1);
	return (0);
}
