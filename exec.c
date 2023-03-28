#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
 pid_t pid;
 /*fork a child process*/
 pid=fork();
 if(pid<0)/*error occurred*/
 {
  fprintf(stderr, "fork failed");
  return 1;
 } 
 else if(pid==0)
 {/*child process*/
  execlp("/bin/Is","is",NULL);
 }
 else
 {/*parent process*/
  wait(NULL);
  printf("child complete");
 }
return 0;
}
