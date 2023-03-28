#include<stdio.h> 
#include<dirent.h>
#include<stdlib.h>
void main()
{
 struct dirent *de;
 DIR *dr=opendir("."); 
 if(de=NULL)
 {
  printf("\nCould not open current directory");
  exit(0);
 }
 while((de=readdir(dr))!=NULL)
 {
 printf("%s\n",de->d_name);
 }
 closedir(dr);
}
