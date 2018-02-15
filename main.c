/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 19:45:57 by frahaing          #+#    #+#             */
/*   Updated: 2017/11/23 18:06:19 by rkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#define BUFF_SIZE 1024

int			main(int argc, char **argv)
{
	int		fd;
	char	buf[BUFF_SIZE + 1];
	char	**tab_tetris;
	char	*res;

	if (argc != 2)
	{
		ft_putstr("error\n");
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (0);
	read(fd, buf, BUFF_SIZE);
	if ((ft_validity_check_four(buf) == 0) || (!(ft_check_placement(buf))))
	{
		ft_putstr("error\n");
		return (0);
	}
	tab_tetris = ft_validity_check_split(buf);
	res = ft_fillit(tab_tetris);
	ft_putstr(res);
	return (0);
}
