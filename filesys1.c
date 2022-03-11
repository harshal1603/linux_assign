#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(){
int fd1,fd2,fd3;
fd2=open("DUMMY4.txt",O_CREAT|O_RDWR,777);
printf("fd returned by kernel %d",fd2);
char buf[15]="Hello chipmates";
char buff1[15];
char buff2[15];
char buff3[15];
write(fd2,buf,15);
lseek(fd2,-5,SEEK_CUR);
read(fd2,buff2,15);
printf("\ndata from buffer %s\n",buff2);
write(fd2,buf,15);
lseek(fd2,-10,SEEK_END);
read(fd2,buff3,15);
printf("\ndata from buffer %s\n",buff3);
write(fd2,buf,15);
lseek(fd2,0,SEEK_SET);
read(fd2,buff1,15);
printf("\ndata from buffer %s\n",buff1);


close(fd1);
close(fd2);
close(fd3);

return 0;
}


