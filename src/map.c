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

//char	**read_map(char *map_file, s_data *vars)
//{
//	int fd;
//	int i;
//	int j;
//	//t_size	w_size;
//	char	*line;
//
//
//	i = 0;
//	j = 0;
//	vars.f_map
//	//f_map = NULL;
//	fd = open(map_file, O_RDONLY);
//	if (fd < 0)
//		write(1, "the file does not exist!\n", 25);
//	line = get_next_line(fd);
//	f_map = malloc(sizeof(char **));
//
//	vars->f_map[0] = get_next_line(fd);
//	vars->win_draw.x = ft_strlen(vars->f_map[0]);
//	w_size -> x = ft_strlen(f_map[i]);
//	while (f_map)
//	{
//		i++;
//		f_map[i] = get_next_line(fd);
//		w_size -> y = j++;
//	}
//	if (!f_map[0])
//	{
//		write(1, "check the file map! empty!\n", 27);
//		exit(0);
//	}
//	write(1, "test_read\n", 10);
//	return (f_map);
//}

//char	**read_map2(char *map_file)
//{
//	int		fd;
//	int 	i;
//	char	*line;
//	char	**f_map;
//
//	i = 0;
//	fd = open(map_file, O_RDONLY);
//	while (line[i++])
//	{
//		line = get_next_line(fd);
//		f_map[i] = line;
//	}
//	return(f_map);
//}

//void	check_size_map(char *map_file)
//{
//	size_t	length;
//	size_t	height;
//	t_size	w_size;
//	int		i;
//	int		fd;
//
//	i = 0;
//	height = 0;
//	fd = open(map_file, O_RDONLY);
//
//
//	length = ft_strlen1(map_file[i]);
//	while (map_file[height])
//		height++;
//	while (map_file[i])
//	{
//		if (length != ft_strlen1(map_file[i]))
//		{
//			write(1, "file map is not valid!\n", 23);
//			exit(0);
//		}
//		i++;
//	}
//	w_size.x = length;
//	w_size.y = height;
//}

// check elements
