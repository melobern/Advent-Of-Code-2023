/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_split.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 09:47:37 by mbernard          #+#    #+#             */
/*   Updated: 2023/12/04 15:00:43 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scratchcards.h"

static int	ft_len_tab(char const *s, char c)
{
	int	len_tab;
	int	check;

	len_tab = 0;
	check = 0;
	if (!s)
		return (0);
	while (*s)
	{
		if (*s != c && *s != '|')
		{
			if (check == 0)
				len_tab++;
			check = 1;
		}
		else
			check = 0;
		s++;
	}
	return (len_tab);
}

static int	ft_len_int(char const *s, char c)
{
	int	len_tab;
	int	check;

	len_tab = 0;
	check = 0;
	if (!s)
		return (0);
	while (*s && !ft_isdigit(*s))
		s++;
	while (*s && *s != c && *s != '|')
	{
		if (ft_isdigit(*s))
		{
			if (check == 0)
				len_tab++;
			check = 1;
		}
		else
			check = 0;
		s++;
	}
	return (len_tab);
}

static int	*ft_write_int(char *s, char c, int *cursor)
{
	int	*nums;
	int	num;
	int	len_int;
	int	x;

	num = 0;
	x = 0;
	len_int = ft_len_int(s + *cursor, c);
	nums = malloc(sizeof(int) * len_int);
	if (!nums || !s)
		return (0);
	while (x < len_int)
	{
		while (s[*cursor] && !ft_isdigit(s[*cursor]))
			(*cursor)++;
		while (s[*cursor] && ft_isdigit(s[*cursor]))
		{
			num = num * 10 + (s[*cursor] - '0');
			(*cursor)++;
		}
		nums[x] = num;
		num = 0;
		x++;
	}
	return (nums);
}

static void	ft_free_tab(int **tab)
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

int	**ft_int_split(char const *s, char c)
{
	int	**tab;
	int	len_tab;
	int	i;
	int	cursor;

	len_tab = ft_len_tab(s, c);
	tab = (int **)malloc(sizeof(int *) * (len_tab));
	if (!tab)
		return (0);
	i = 0;
	cursor = 0;
	while (i < len_tab)
	{
		tab[i] = ft_write_int((char *)s, c, &cursor);
		if (!tab[i])
		{
			ft_free_tab(tab);
			return (0);
		}
		i++;
	}
	return (tab);
}

/*
int	main(void)
{
	int	x = 0;
	int	y = 0;
	int	**nums = ft_int_split(g_test, 'C');

	while (nums[x])
	{
		y = 0;
		while(nums[x][y])
		{
			ft_putnbr_fd(nums[x][y], 1);
			ft_putchar_fd('\t', 1);
			y++;
		}
		ft_putendl_fd(" END", 1);
		x++;
	}
	return (0);
}
*/
