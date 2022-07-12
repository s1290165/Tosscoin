#include <stdio.h>
#include <stdlib.h>

int main(){

  int i,h=0,t=0; /*head or tail */
  char name[10];

  printf("Who are you? \n");
  printf("> ");

  scanf("%s",name);

  printf("Hello, %s\n",name);


  printf("Tossing a coin ... \n"); /* 乱数使う */

  for( i = 0; i < 3; i++){

    int r = rand() % 2;

    if( r == 1){
      printf("Round %d:Heads \n",i);
      h++;
    }else if( r == 0 ){
      printf("Round %d:Tails \n",i);
      t++;
    }
  }

  printf("Heads: %d, Tails: %d \n",h,t);

  if( h > t) printf("%s won\n",name);
  else if( h < t) printf("%s lost\n",name);
  
  return 0;
}
      
    
