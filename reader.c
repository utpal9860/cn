#include<stdio.h>
#include<sys/stat.h>
#include<unistd.h>
#include<fcntl.h>

#define buf  1024

int main(){
	int fd;
	char * myfifo = "/temp/myfifo";
	char mybuf[buf];
	
	fd = open(myfifo,O_RDONLY);
	read(fd,mybuf,buf);
	printf("Recived:%s",mybuf);
	return 0;
}
