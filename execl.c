#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/wait.h>
int main()
{
int pid;

pid=fork();
if(pid<0)
{
printf("fork failed");
}
if(pid==0)
{
execl("/bin/ls","ls","-l","execvp.c",(char *)NULL);
}
else
{
wait(0);
}
return 0;
}

