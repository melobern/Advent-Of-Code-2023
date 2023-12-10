/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wait_for_it_part1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 12:36:08 by mbernard          #+#    #+#             */
/*   Updated: 2023/12/10 14:54:31 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_time(int time, int speed, int distance)
{
	int	time_t;
	int	passed;

	time_t = speed;
	passed = 0;
	while (time_t < time)
	{
		passed += speed;
		time_t++;
	}
	return (passed);
}

int	ft_count_solutions(int time, int distance)
{
	int	passed;
	int	speed;
	int	solutions;

	passed = 0;
	speed = 0;
	solutions = 0;
	while (++speed < distance)
	{
		passed = ft_count_time(time, speed, distance);
		if (passed > distance)
			solutions++;
	}
	return (solutions);
}

int	main(void)
{
	int	one;
	int	two;
	int	three;
	int	four;
	int	res;

	one = ft_count_solutions(52, 426);
	two = ft_count_solutions(94, 1374);
	three = ft_count_solutions(75, 1279);
	four = ft_count_solutions(94, 1216);
	res = one * two * three * four;
	printf("Result : %i\n", res);
	return (0);
}
