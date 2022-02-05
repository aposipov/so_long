/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:37:08 by lchristi          #+#    #+#             */
/*   Updated: 2022/02/05 18:32:45 by lchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mlx.h>

typedef struct	s_data {
	void	*img;
	char	*addr;
	int	bits_per_pixel;
	int	line_length;
	int	endian;
}	t_data;

void	my_mlx_pixel_put(t_data *data, int x, int y, int color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel / 8));
	*(unsigned int*)dst = color;
}

int	main(void)
{
	void	*mlx;
	void	*mlx_win;
	t_data	img;

	mlx = mlx_init();
	mlx_win = mlx_new_window(mlx, 800, 600, "Hello world!");
	img.img = mlx_new_image (mlx, 800, 600);
	img.addr = mlx_get_data_addr(img.img, &img.bits_per_pixel, &img.line_length, &img.endian);
	my_mlx_pixel_put(&img, 33,33, 0x00FF0000);
	//my_mlx_pixel_put(&img, 6, 6, 0x00FFFF00);	
	//my_mlx_pixel_put(&img, 7, 7, 0x00FFFF00);
	//my_mlx_pixel_put(&img, 8, 8, 0x00FFFF00);
	//my_mlx_pixel_put(&img, 9, 9, 0x00FF0000);
	//my_mlx_pixel_put(&img, 10, 9, 0x00FF0000);
	//my_mlx_pixel_put(&img, 11, 9, 0x00FF0000);
	//my_mlx_pixel_put(&img, 12, 9, 0x00FF0000);
	mlx_put_image_to_window(mlx, mlx_win, img.img, 0, 0);
	mlx_loop(mlx);
}
