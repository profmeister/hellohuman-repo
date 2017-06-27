#include<unistd.h>
#include<stdio.h>
int main() {
 int x=0;
 do{
  printf("Hello Humanoid! I live.\n");
  sleep(1);
 }while(x++<50);
 return 0;
}

