/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_cube.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 12:36:33 by mbernard          #+#    #+#             */
/*   Updated: 2023/12/02 15:36:58 by mbernard         ###   ########.fr       */
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

int	ft_game_result(char *game, int game_num)
{
	int	red;
	int	blue;
	int	green;

	red = ft_count_color(game, "red", 3);
	blue = ft_count_color(game, "blue", 4);
	green = ft_count_color(game, "green", 5);
	if (red <= g_pocket_red && green <= g_pocket_green && blue <= g_pocket_blue)
		return (game_num);
	return (0);
}

int	main(void)
{
	char	**games;
	int		game_num;
	int		cursor;
	int		result;

	games = ft_split(g_reel, 'G');
	game_num = 0;
	cursor = 0;
	result = 0;
	while (games[cursor])
	{
		game_num = ft_atoi(games[cursor] + 4);
		result += ft_game_result(games[cursor], game_num);
		cursor++;
	}
	ft_putnbr_fd(result, 1);
	ft_free_tab(games);
	return (0);
}
