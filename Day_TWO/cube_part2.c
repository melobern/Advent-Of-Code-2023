/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube_part2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 12:36:33 by mbernard          #+#    #+#             */
/*   Updated: 2023/12/02 16:06:53 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube_conundrum.h"

void	ft_free_tab(char **tab)
{
	int	i;

	i = 0;
	if (!tab)
		return ;
	while (tab[i])
	{
		if (tab[i])
			free(tab[i]);
		i++;
	}
	free(tab);
}

int	ft_count_color(char *str, char *color, int color_len)
{
	int	x;
	int	num;
	int	num_2;

	x = 0;
	num = 0;
	num_2 = 0;
	if (str)
	{
		while (str[x])
		{
			if (!ft_strncmp(str + x, color, color_len))
				num_2 = ft_atoi(str + x - 3);
			if (num < num_2)
				num = num_2;
			x++;
		}
	}
	return (num);
}

int	ft_game_result(char *game)
{
	int	red;
	int	blue;
	int	green;

	red = ft_count_color(game, "red", 3);
	blue = ft_count_color(game, "blue", 4);
	green = ft_count_color(game, "green", 5);
	return (red * green * blue);
}

int	main(void)
{
	char	**games;
	char	**ptr;
	int		result;

	games = ft_split(g_reel, 'G');
	ptr = games;
	result = 0;
	while (*games)
	{
		result += ft_game_result(*games);
		games++;
	}
	ft_putnbr_fd(result, 1);
	ft_free_tab(ptr);
	return (0);
}
