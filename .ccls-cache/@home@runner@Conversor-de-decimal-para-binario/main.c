#include <stdio.h>

int main(void) {

int i, m[32], x;
  double j= 1;

  scanf("%d" , &x);

  for(i = 31; i > -1; i--){

    m[i] = 0;
    j = j * 2;
  }

for(i = 0; i < 33; i++){

  if(x >= j){
    m[i +-1] = 1;
    x = x - j;
  }
  j = j/2;

  }
printf("\n");
for(i = 0; i < 32; i++){
  printf("%d" , m[i]);
   if(i == 7|| i == 15|| i == 23)
    printf("  ");
  }




  return 0;
  }