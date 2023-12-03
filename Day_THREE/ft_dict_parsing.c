/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_parsing.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcamerly <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 09:39:03 by lcamerly          #+#    #+#             */
/*   Updated: 2023/12/03 10:42:45 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "lib_functions.h"

int     ft_close_file(int file)
{
        int file_closed;

        file_closed = close(file);
        if (file_closed == -1)
        {
                ft_putstr("Error while closing the file\n");
                return (-1);
        }
        else if (file_closed == 0)
        {
                return (0);
        }
        return (-1);
}

int     ft_open_file(char *filename)
{
        int file;
        file = open(filename, O_RDONLY);

        if (file < 0)
        {
                ft_putstr("Error while opening the file\n");
                return (-1);
        }       
        else 
                return (file);
}

int ft_pre_read(char *filename)
{

	int     file;
	int     i;
	char    buffer[1];
	int     count;


        buffer[0] = '\0';
	i = 0;
	count = 0;
	file = ft_open_file(filename);
	while (1)
	{
		i = read(file, buffer, sizeof(buffer));
		if (i == 0)
		        break ;
		if (i == -1)
		{
                        ft_putstr("Error while pre-reading the file\n");
                        return (0);
                        exit(1);
		}
		count++;
	}
        ft_close_file(file);
	return (count);
}

char *ft_read_file(char *filename, char *str)
{
        int             file;
        int             i;
        char    buffer[140];
        
        buffer[0] = '\0';
        i = 0;
        file = ft_open_file(filename);
        if (file == -1)
                return NULL;
        while (1)
        {
                i = read(file, buffer, sizeof(buffer));
                if (i == 0)
                        break ;
                if (i == -1)
                {
                        ft_putstr("Error while reading the file\n");
                        return (NULL);
                }
                buffer[i] = '\0';
                ft_strcat(str, buffer);
        }
        ft_close_file(file);
        return (str);
}

int	nb_occ(char delimiter, char *str)
{
	int	i;
	int	occ;

	i = 0;
	occ = 0;
	while (str[i] != '\0')
	{
		if (str[i] == delimiter)
			occ++;
		i++;
	}
	return (occ);
}

