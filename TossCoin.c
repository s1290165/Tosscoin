#include <stdio.h>
#include <stdlib.h>

int main(){

  int i,h,t;			/*head or tail */

  printf("Tossing a coin ... \n"); /* 乱数使う */

  for( i = 0; i < 3; i++){

    int r = rand()/RAND_MAX;

    if( r == 1){
      printf("Round %d:Heads \n",i);
      h++;
    }else if( r == 0 ){
      printf("Round %d:Tails \n",i);
      t++;
    }
  }

  printf("Heads: %d, Tails: %d \n",h,t);

  if( h > t) printf("You won\n");
  else if( h < t) printf("You lost\n");
  
  return 0;
}
      
    
