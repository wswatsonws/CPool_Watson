#include <fcntl.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include "../include/my.h"

int infinite()
{
	int ret;
	char buffer[32];
	while(1)
	{
		ret = read(0, buffer, 31);
		buffer[ret] = '\0';
		if (ret == 0)
			return (0);
		my_putstr(buffer);
	}
}

void	error(char **argv, int i, int errsv)
{
	if (argv[i][0] == '-')
		infinite();
	else if (errsv == EACCES)
	{
		write(2, "cat: ", 5);
		write(2, argv[i], my_strlen(argv[i]));
		write(2, ": Permission denied\n", 20);
	}
	else if (errsv == ENOENT)
	{
		write(2, "cat: ", 5);
		write(2, argv[i], my_strlen(argv[i]));
		write(2, ": No such file or directory\n", 28);
	}
	else if (errsv == EISDIR)
	{
		write(2, "cat: ", 5);
		write(2, argv[i], my_strlen(argv[i]));
		write(2, ": Is a directory\n", 17);
	}
}

int main(int ac, char **av)
{
	int fd;
	int ret = 1;
	int i = 1;
	char buffer[32];
	if (ac == 1)
		infinite();
	while (i < ac)
	{
		fd = open(av[i], O_RDONLY);
		if (fd == -1)
		{
			//err = 1;
			error(av, i, errno);
		}
		if(fd != -1)
		{
			while ((ret = read(fd, buffer, 31)) > 0)
			{
				buffer[ret] = '\0';
				write(1, buffer, ret);
			}
		}
		if(ret < 0)
			error(av,i,errno);
		 close(fd);
		 i++;
	}
	return 0;
}
