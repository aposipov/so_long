/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:12:38 by lchristi          #+#    #+#             */
/*   Updated: 2022/02/07 14:12:42 by lchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"
#include "../inc/get_next_line.h"

char	**read_map(char *map_file)
{
	int		fd;
	int		i;
	char	*line;
	char	**f_map;

	i = 0;
	f_map = NULL;
	fd = open(map_file, O_RDONLY);
	if (fd < 0)
		write(1, "the file does not exist!\n", 25);
	line = get_next_line(fd);
	f_map = malloc(sizeof(char **));
	while (line)
	{
		f_map[i] = line;
		line = get_next_line(fd);
		i++;
	}
	f_map[i] = NULL;
	if (!f_map[0])
	{
		write(1, "check the file map! empty!\n", 27);
		exit(0);
	}
	return (f_map);
}

void	check_size_map(char **map)
{
	size_t	length;
	size_t	height;
	t_size	w_size;
	int		i;

	i = 0;
	height = 0;
	length = ft_strlen1(map[i]);
	while (map[height])
		height++;
	while (map[i])
	{
		if (length != ft_strlen1(map[i]))
		{
			write(1, "file map is not valid!\n", 23);
			exit(0);
		}
		i++;
	}
	w_size.x = length;
	w_size.y = height;
}

// check elements
