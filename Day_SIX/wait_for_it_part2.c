/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wait_for_it_part2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 12:36:08 by mbernard          #+#    #+#             */
/*   Updated: 2023/12/10 15:04:36 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

long long	ft_count_time(long long time, long long speed, long long distance)
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

int	ft_count_solutions(long long time, long long distance)
{
	long long	passed;
	long long	speed;
	int			solutions;

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
	int	race;

	race = ft_count_solutions(52947594, 426137412791216);
	printf("Result : %i\n", race);
	return (0);
}
