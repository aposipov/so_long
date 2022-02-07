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

void arg_read(char *map)
{
	while (*map)
		write(1, map++, 1);
	write(1, "\n", 1);

}

void ft_extension(char *path)
{
	int i;

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

int main(int argc, char **argv)
{
	t_data	vars;
	int i = 0;

	if (argc == 2)
	{
		//arg_read(argv[1]);
		ft_extension(argv[1]);
		//check extension
		//
		//vars.f_map =
		vars.f_map = read_map(argv[1]);
		while (vars.f_map[i])
		{
			printf("%s", vars.f_map[i++]);
			//write(1, "test", 4);
		}
			//check valid map
		//write(1, "its ok\n", 7);
	}
	else
		write(1, "check your arguments!\n", 22);
	return (0);
}

