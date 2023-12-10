/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wait_for_it_part1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 12:36:08 by mbernard          #+#    #+#             */
/*   Updated: 2023/12/10 13:35:43 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_time(int speed, int distance)
{
	int	time;

	time = 0;
	while (speed < distance - speed)
	{
		speed += speed;
		time++;
		printf("speed : %i\ttime: %i\n", speed, time);
	}
	printf("Final time: %i\n", time);
	return (time);
}
int	ft_count_solutions(int record, int distance)
{
	int	time;
	int	speed;
	int	solutions;

	time = 0;
	speed = 0;
	solutions = 0;
	while (++speed < distance)
	{
		time = ft_count_time(speed, distance);
		if (time > 0 && time < record)
			solutions++;
	}
	return (solutions);
}

int	main(void)
{
	int	first = ft_count_solutions(7, 9);
	int	second = ft_count_solutions(15, 40);
	int	thirst = ft_count_solutions(30, 200);
	int	result = first * second * thirst;

	printf("First %i\n", first);
	printf("Second %i\n", second);
	printf("Thirst %i\n", thirst);
	printf("Result %i\n", result);
	return (0);
}
