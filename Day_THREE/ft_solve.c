/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 10:59:15 by mbernard          #+#    #+#             */
/*   Updated: 2023/08/29 16:45:28 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_functions.h"

int	**ft_copy_matrix(char **map, char empty, char obs, int nb)
{
	int	**matrix;
	int	x;
	int	y;
	int	z;

	matrix = malloc(sizeof(int *) * (nb));
	x = 0;
	z = 1;
	while (z < nb)
	{
		y = -1;
		matrix[x] = malloc(sizeof(int) * ft_strlen(map[z]));
		while (map[z][++y])
		{
			if (map[z][y] == empty)
				matrix[x][y] = 0;
			else if (map[z][y] == obs)
				matrix[x][y] = 1;
		}
		x++;
		z++;
	}
	print_map_int(matrix);
	return (matrix);
}
/*
int	ft_obs_matrix(int **matrix)
{
	int	x;
	int	y;

	x = 0;
	while (matrix[++x])
	{
		y = 0;
		while (matrix[x][++y - 1] == 1)
		{
			matrix[x][y] += 1; 
		}
	}
	return (matrix);
}*/
/*
char	**solve(char **matrix)
{
}
*/
