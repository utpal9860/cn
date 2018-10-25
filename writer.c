
#include<stdio.h>
#include<fcntl.h>
//#include<sys/type>
#include<unistd.h>
#include<sys/stat.h>

int main(){
	int fd,ch;
	char * myfifo = "/tmp/myfifo";
	printf("Enter your choice:");
	printf("\n1.character ssaperated by spaces");
	printf("\n2.one string at a time");
	printf("\n3.one sentence aat a time");
	scanf("%d",&ch);
	mkfifo(myfifo,0666);
	
	fd = open (myfifo,O_WRONLY);
	
	switch(ch){
		case 1:
			write(fd,"H I",sizeof("H I"));
			close(fd);
			unlink(myfifo);
			break;
		case 2:
			write(fd,"heloooo",sizeof("heloooo"));
			close(fd);
			unlink(myfifo);
			break;
		case 3:
			write(fd,"hello frandss",sizeof("hello frandss"));
			close(fd);
			unlink(myfifo);
			break;
	}
	
	return 0;
}
