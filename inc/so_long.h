/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchristi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 16:23:36 by lchristi          #+#    #+#             */
/*   Updated: 2022/02/03 16:57:45 by lchristi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <mlx.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_data {
	void	*mlx;
	void	*win;	
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;	
}	t_data;

#endif
