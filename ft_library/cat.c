#include "libft.h"

int	main(int argc, char **argv)
{
	int	fd;
	ssize_t	r;
	char	buf[BUFFER_SIZE];

	if (argc > 1)
		fd = open(argv[1], O_RDONLY);
	if (fd == -1)
			return (-1);
	while ((r = read(fd, buf, BUFFER_SIZE)))
		write(1, buf, r);
	close(fd);
	return 0;
}
