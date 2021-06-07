#include <stdio.h> 
  //** Programa:Calcular_cilindro/
   //* Cálculo del Área y el volumen de un cilindro */
   
   int main() {
     const float PI = 3.14159265;
     float radio, altura, area, volumen;
   
    printf( "¿Introducir el radio del cilindro? " );
    scanf( "%f", &radio );
    printf( "¿Introducir la altura del cilindro? " );
    scanf( "%f", &altura );
    area = 2.0 * PI * radio * (radio + altura);
    volumen = PI * radio * radio * altura;
    printf( "Area: %15g\nVolumen: %15g\n", area, volumen );
  }
