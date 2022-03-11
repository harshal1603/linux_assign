#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(){
int fd1;
fd1=open("hole.txt",O_CREAT|O_RDWR|O_TRUNC,777);
lseek(fd1,4000,SEEK_SET);
write(fd1,"hello",4);



}
