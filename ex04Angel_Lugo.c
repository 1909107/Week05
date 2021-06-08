#include<stdio.h>

int main(void){
  float angel, christian, Mayo, x, total, porangel, porchristian, porMayo;
  printf("El dinero que le pertenece a angel\n");
  scanf("%f",&angel);

 printf("El dinero que le pertenece a christian\n");
  scanf("%f",&christian);

  printf("El dinero que le pertenece a Mayo\n");
  scanf("%f",&Mayo);

  total= angel + christian + Mayo;

  angel= (angel/total)*100;
  christian= (christian/total)*100;
  Mayo= (Mayo/total)*100;

  printf("total de los tres es %f\n ", total);
  printf("A angel le toco el %f\n ", angel);
  printf("A christianle toco  el %f\n", christian);
  printf("A mayo le toco el %f\n", Mayo);

  return 0;
}
