#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
int main(int argc, char *argv[]) {

	int fd = open(argv[1], O_RDONLY);
	if (fd == -1 && argc <2) {
    	perror("open");
	}
	int i = 1;
	
	while ((fd != 0) || (fd != -1)) {
		int fd = open(argv[i], O_RDONLY);
		char buf[2048];
		int count = read(fd, buf, sizeof buf);
		write(STDOUT_FILENO, buf, count);
		close(fd);
		i++;
	}
}
