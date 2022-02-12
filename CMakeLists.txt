cmake_minimum_required(VERSION 3.21)
project(solong_git C)

find_package(OpenGL REQUIRED)

set(CMAKE_C_STANDARD 99)

add_executable(solong_git
        src/draw_map.c src/get_next_line.c src/get_next_line_utils.c src/map.c
        src/movements.c src/so_long.c
        minilibx/font.c minilibx/mlx_int_str_to_wordtab.c minilibx/mlx_png.c minilibx/mlx_xpm.c
        minilibx/mlx_rgb.c minilibx/mlx_shaders.c)
