#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int main () {
	int file = open("test", O_RDONLY);

	char *gnl = get_next_line(file);
	char *gnl2 = get_next_line(file);
	char *gnl3 = get_next_line(file);
	close(file);

	printf("%s", gnl);
	free(gnl);
	printf("%s", gnl2);
	free(gnl2);
	printf("%s", gnl3);
	free(gnl3);
}
