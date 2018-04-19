#include <stdio.h>
#include <stdlib.h>
#include <semaphore.h>
#include <pthread.h>
#include <time.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define MAXBUFFER 512
char buffer[3][MAXBUFFER];

int main(int argc, char **argv) {
  int f = open(argv[1], O_RDONLY);
  int n = read(f, buffer[0], MAXBUFFER);

  printf("%s, %d", buffer[0], n);
	return 0;
}
