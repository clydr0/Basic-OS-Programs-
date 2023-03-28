#include<stdio.h>
#include<sys/wait.h>
#include<unistd.h>
void main()
{
 if(fork()==0)
 {
  printf("Hello from Child\n");
 }
 else
 {
  printf("Hello from parent\n");
  wait(NULL);
  printf("Child has terminated\n");
  printf("Bye\n");
 }
} 
