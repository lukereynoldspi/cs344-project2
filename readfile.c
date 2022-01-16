#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
	if(argc < 2){
		perror("Error: No file");
	}

	int fd = open(argv[1], O_RDONLY);

	if (fd == -1) {
    	perror("open");
	}

	char buf[128];
	int count = read(fd, buf, sizeof buf);

	write(fd, buf, count);
	close(fd);
}