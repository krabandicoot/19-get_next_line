#include "get_next_line.h"
int	main(void) //
{
	int		fd;
	char	*line;
	int		i;

	fd = open("numbers.dict", O_RDONLY);
	i = 0;
	while (i < 40)
	{
		line = get_next_line(fd);
		ft_putstr(line);
		i++;
	}
}