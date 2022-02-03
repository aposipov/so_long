#include <mlx.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct	s_vars {
	void	*mlx;
	void	*win;
}				t_vars;

int	key_hook(int keycode, t_vars *vars)
{
	(void)vars; 
	if (keycode == 53) // esc butt ok
	{	
		mlx_destroy_window(vars->mlx, vars->win);
		exit(0);	
	}
	//	printf("left button\n");
	//else if (keycode == 2)
	//	printf("right button\n");
	return (0);
}

int	main(void)
{
	t_vars	vars;

	vars.mlx = mlx_init();
	vars.win = mlx_new_window(vars.mlx, 640, 480, "Hello world!");
	mlx_key_hook(vars.win, key_hook, &vars);
	mlx_loop(vars.mlx);
}
