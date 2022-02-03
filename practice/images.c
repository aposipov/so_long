#include <mlx.h>

int	main(void)
{
	void	*mlx;
	void	*img;
	char	*relative_path = "./test.xpm";
	int		img_width = 100;
	int		img_height = 100;

	mlx = mlx_init();
	img = mlx_xpm_file_to_image(mlx, relative_path, &img_width, &img_height);
}
