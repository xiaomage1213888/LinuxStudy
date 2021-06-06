#include "proc.h"


extern void proc(){
  char bar[NUM];
  memset(bar,'\0',sizeof(bar));
  const char* lable="|/-\\";
  int i=0;
  while(i<100){
    fflush(stdout);
    bar[i++]='#';
    usleep(60000);
    printf("[%-100s][%3d%%][%c]\r", bar,i,lable[i%4]);
  }
  printf("\n");
}

