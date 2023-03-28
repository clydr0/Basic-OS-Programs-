#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void main()
{
 int i;
 for(i=0;i<10; i++)
 {
  if(i==5)
  {
   exit(0);
  }
  else
  {
   printf("%d\n",i); 
  }
 }
}  

