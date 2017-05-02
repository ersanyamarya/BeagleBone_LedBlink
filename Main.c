#include<stdlib.h>
#include<fcntl.h>
#include<stdio.h>
#include<string.h>
#include<time.h>

int main() {
	int fd30,fd31;
	fd30 = open("/sys/class/gpio/gpio30/direction", O_WRONLY | O_CREAT, 0666);
	if (fd30 == 0) {
		perror("open");
		exit(1);
	}
	write(fd30, "out", 3);
	close(fd30);

	fd30 = open("/sys/class/gpio/gpio30/value", O_WRONLY | O_CREAT, 0666);
	if (fd30 == 0) {
		perror("open");
		exit(1);
	}

	fd31 = open("/sys/class/gpio/gpio31/direction", O_WRONLY | O_CREAT, 0666);
	if (fd31 == 0) {
		perror("open");
		exit(1);
	}
	write(fd31, "out", 3);
	close(fd31);

	fd31 = open("/sys/class/gpio/gpio31/value", O_WRONLY | O_CREAT, 0666);
	if (fd31 == 0) {
		perror("open");
		exit(1);
	}
  write(fd30, "1", 1);
	write(fd31, "1", 1);
	while (1) {

		write(fd30, "0", 1);
		sleep(1);
		write(fd30, "1", 1);
		write(fd31, "0", 1);
		sleep(1);
		write(fd31, "1", 1);

	}
	close(fd30);
	return 0;
}
