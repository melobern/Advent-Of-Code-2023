/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scratchcards.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbernard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 09:33:37 by mbernard          #+#    #+#             */
/*   Updated: 2023/12/04 15:31:57 by mbernard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCRATCHCARDS_H
# define SCRATCHCARDS_H
# include <unistd.h>
# include <stdlib.h>
//const char	*g_test = "C 41 48 83 86 17 | 83 86  6 31 17  9 48 53 C 13 32 20 16 61 | 61 30 68 82 17 32 24 19 C  1 21 53 59 44 | 69 82 63 72 16 21 14  1 C 41 92 73 84 69 | 59 84 76 51 58  5 54 83 C 87 83 26 28 32 | 88 30 70 12 93 22 82 36 C 31 18 13 56 72 | 74 77 10 23 35 67 36 11";

size_t		ft_strlen(const char *s);
int    			**ft_int_split(char const *s, char c);
int			ft_isdigit(int c);
int			ft_atoi(const char *str);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);

#endif
