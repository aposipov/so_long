/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 16:23:36 by lchristi          #+#    #+#             */
/*   Updated: 2022/02/06 16:15:11 by lchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../minilibx/mlx.h"
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct	s_size {
	size_t 	x;
	size_t 	y;
}	t_size;

typedef struct s_data {
	char	**f_map;
	void	*mlx;
	void	*win;
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
	int		collect;
	t_size	win_draw;
}	t_data;

char	**read_map(char *map_file);
void	check_size_map(char **map);
int		movements(int keycode, t_data *vars);
void	draw(char *path, t_data vars);
void	draw_block(char block, t_data *vars, int i, int j);
void	map(char **map_file, t_data *vars);

#endif
