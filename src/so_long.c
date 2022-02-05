/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 16:32:20 by lchristi          #+#    #+#             */
/*   Updated: 2022/02/05 18:22:50 by lchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

int mouse_b(int keycode, t_data *vars)
{
	(void)vars;
	//printf("%d\n", keycode); // key button print
	if (keycode == 1)
		printf("left button\n");
	else if (keycode == 2)
		printf("right button\n");
	else if (keycode == 3)
		printf("scroll\n");

	return(0);
}

int	close_w(int keycode, t_data *vars)
{
	(void)vars;
	//printf("%d\n", keycode); // key button print
	if (keycode == 53)
	{
		mlx_destroy_window(vars->mlx, vars->win);
		exit(0);
	}
	else if (keycode == 13)
		printf("W press\n");
	else if (keycode == 1)
		printf("S press\n");
	else if (keycode == 0)
		printf("A press\n");
	else if (keycode == 2)
		printf("D press\n");
	return(0);
}

int main(void) // argc argv
{
	t_data	vars;

	//if (argc < 2)
		
		//check map
	//if (argc > 2)
		//check arg
	// ft check map
	vars.mlx = mlx_init();
	vars.win = mlx_new_window(vars.mlx, 600, 600, "so_long");
	
	// init manipul
	mlx_key_hook(vars.win, close_w, &vars);
	mlx_mouse_hook(vars.win, mouse_b, &vars);
	//mlx_hook();
	mlx_loop(vars.mlx);
	return(0);
}

