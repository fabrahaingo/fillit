/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frahaing <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 16:37:54 by frahaing          #+#    #+#             */
/*   Updated: 2018/02/09 11:12:55 by frahaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_read_until(int fd, char *tab, char *line)
{
	size_t	r;
	char	*clone;

	while (((r = read(fd, tab, BUFF_SIZE)) > 0) && ft_strchr(tab,
			'\n') == NULL)
	{
		clone = line;
		tab[r] = 0;
		line = ft_strjoin(clone, tab);
		ft_strclr(tab);
		free(clone);
	}
	tab[r] = 0;
	return (line);
}

static char	*ft_fill_end(char *tab, char *line)
{
	int		i;
	char	*tmp;
	char	*clone;

	i = 0;
	clone = line;
	while (tab[i] != '\n' && tab[i])
		i++;
	tmp = ft_strsub(tab, 0, i);
	line = ft_strjoin(clone, tmp);
	free(tmp);
	free(clone);
	if (tab[i] == '\0')
		ft_strclr(tab);
	else
		ft_strcpy(tab, tab + i + 1);
	return (line);
}

int			get_next_line(const int fd, char **line)
{
	static char	tab[4865][BUFF_SIZE + 1];
	char		*tmp;

	if (read(fd, tab[fd], 0) < 0 || !(line))
		return (-1);
	*line = ft_memalloc(BUFF_SIZE + 1);
	if (tab[fd][0] && ft_strchr(tab[fd], '\n') == NULL)
		*line = ft_strcpy(*line, tab[fd]);
	else if (tab[fd][0] && (tmp = ft_strchr(tab[fd], '\n')) != NULL)
	{
		ft_strncpy(*line, tab[fd], tmp - tab[fd]);
		ft_strcpy(tab[fd], tmp + 1);
		return (1);
	}
	*line = ft_read_until(fd, tab[fd], *line);
	if (tab[fd][0])
	{
		*line = ft_fill_end(tab[fd], *line);
		return (1);
	}
	ft_strclr(tab[fd]);
	return ((**line) ? 1 : 0);
}
