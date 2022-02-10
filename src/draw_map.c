/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 15:15:17 by lchristi          #+#    #+#             */
/*   Updated: 2022/02/08 15:15:20 by lchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

void	draw(char *path, t_data vars)
{
	void	*chr;
	int		x;
	int		y;

	x = 0;
	y = 0;
	chr = mlx_xpm_file_to_image(vars.mlx, path, &x, &y);
	mlx_put_image_to_window(vars.mlx,vars.win, chr, vars
	.win_draw.x, vars.win_draw.y);
}

void	draw_block(char block, t_data *vars, int i, int j)
{
	(void) i;
	(void) j;
	if (block == '1')
		draw("./xpm/wall_50_50.xpm", *vars);
	else if (block == '0')
		draw("./xpm/ground.xpm", *vars);
	else if (block == 'C')
	{
		//draw("./xpm/ground.xpm", *vars);
		draw("./xpm/key_50_50.xpm", *vars);
		draw("./xpm/ground.xpm", *vars);
//		game->collect += 1;
	}
	else if (block == 'E')
	{
		draw("./xpm/ground.xpm", *vars);
		draw("./xpm/door_open.xpm", *vars);
	}
//	else if (block == 'e')
//		draw("./xpm/exit2.xpm", *game);
//	else if (block == 'A')
//		draw("./xpm/m-o.xpm", *game);
//	else if (block == 'P')
//	{
//		game->pos_player.x = j;
//		game->pos_player.y = i;
//		player_dir(*game);
//	}
}

void	map(char **map_file, t_data *vars)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	vars->win_draw.y = 0;
	vars->collect = 0;
	while (map_file[i])
	{
		vars->win_draw.x = 0;
		j = 0;
		while (map_file[i][j])
		{
			draw_block(map_file[i][j], vars, i, j);
			j++;
			vars->win_draw.x += 50;
		}
		vars->win_draw.y += 50;
		i++;
	}
}

