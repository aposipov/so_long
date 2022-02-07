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

char **read_map(char *map_file)
{
	int fd;
	int i = 0;
	char *line;
	char **f_map = NULL;

	fd = open(map_file, O_RDONLY);
	line0 = get_next_line(fd);

	f_map = malloc(sizeof(char **));
	while (line)
	{
		f_map[i] = line;
		line = get_next_line(fd);
		i++;
	}
	f_map[i] = NULL;
	return(f_map);
}

