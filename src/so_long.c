/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 16:32:20 by lchristi          #+#    #+#             */
/*   Updated: 2022/02/06 16:43:21 by lchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"
#include "../inc/get_next_line.h"

void	arg_read(char *map)
{
	while (*map)
		write(1, map++, 1);
	write(1, "\n", 1);
}

void	ft_extension(char *path)
{
	int	i;

	i = 0;
	while (path[i])
		i++;
	if (!(path[i - 1] == 'r' && path[i - 2] == 'e' && path[i - 3] == 'b' &&
	path[i - 4] == '.' && path[i -5] >= 48))
	{
		write(1, "check you path! -> ", 19);
		arg_read(path);
		exit(0);
	}
}

void	check_size_map(char **map)
{
	size_t	length;
	size_t	height;
	int	i;

	i = 0;
	height = 0;
	length = ft_strlen1(map[i]);
//	printf("[len = %zu]", length);
//	printf("[%s]", map[5]);
	if (!map[0])
	{
		write(1, "map is empty\n", 14);
		exit(0);
	}
	while (map[height])
		height++;
	while (map[i])
	{
//		printf("[wh = %zu]", ft_strlen1(map[i]));
//			printf("[%s]\n", map[i]);
		if (length != ft_strlen1(map[i]))
		{
			write(1, "check the file map!\n", 20);
			exit(0);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_data	vars;
	int		i;

	i = 0;
	if (argc == 2)
	{
		ft_extension(argv[1]);
		vars.f_map = read_map(argv[1]);
		check_size_map(vars.f_map);
//		while (vars.f_map[i])
//		{
//			printf("%s", vars.f_map[i++]);
//			//write(1, "test", 4);
//		}
	}
	else
		write(1, "check your arguments!\n", 22);
	return (0);
}
