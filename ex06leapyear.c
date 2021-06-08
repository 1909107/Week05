#include<stdio.h>

 int A;

int main(void){

  printf("Insertar el  año\n");
  scanf("%d", &A);

  if (A % 400 == 0){
  printf("%d", A);
  printf(" Este año, si es biciesto");
  }
  else if(A % 100 ==0){
    printf("%d", A);
    printf("Este no es un año biciesto");
  } 

  else if(A % 4 ==0){
    printf("%d", A);
    printf(" Este año es biciesto");
  }


  else{
    printf("%d", A);
    printf("Este año no es biciesto");
  }
  return 0;
}
