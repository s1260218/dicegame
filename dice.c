#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(void){
  int i,j,k=0;
  char name[20];

  printf("What is your name?\n");
  scanf("%s",name);
  printf("Hello, %s!\n",name);

  printf("Rolling the dice...\n");
  srand((unsigned int)time(NULL));
  
  for(i=0;i<2;i++){
    j=rand()%6+1;
    printf("die %d: %d\n",i+1,j);
    k+=j;
  }
  printf("Total value: %d\n",k);
  
    return 0;
  }
