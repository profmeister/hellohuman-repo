#include<unistd.h>
#include<stdio.h>
int main() {
 int x=0;
 do{
  printf("Hello Humanoid! I live.\n");
  sleep(3);
 }while(x++<50);
 return 0;
}

