

#include "../inc/so_long.h"
#include "../inc/get_next_line.h"

void	check_chr(char	*path)
{
	int fd;
	//int E;
	//int C;
	int P = 0;
	int i;
	int j;
	char	*line = NULL;

	fd = open(path, O_RDONLY);
	i = 0;
	line = get_next_line(fd);
	while(get_next_line(fd))
	{
		i++;
		line[i] = get_next_line(fd);
		j = 0;
		while(line[j++])
		{
			if (line[j] == P)
				P += 1;
		}
	}
	printf("P = %d", P);
}