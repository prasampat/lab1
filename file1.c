#include <stdio.h>
int given_number;
int i, counter=0;
  
int main(void){
  
  printf("Please enter number: ");
  scanf("%d", &given_number);
    
  for(i=1; i<=given_number; i++){
    if(given_number%i == 0){
      counter++;
    }
  }

  if(counter == 1 or counter == 0){
    printf("%d is not a prime number",given_number);
  }
  if(counter == 2){
    printf("%d is a prime number",given_number);
  }

  return 0;
}
