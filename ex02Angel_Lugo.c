#include<stdio.h>
/*Programa:Cualquier numero introducido, sera convertido a los valores de salida de horas,minutos y segundos */
#include<math.h>
int main() {
    float horas, minutos, segundos;
    printf("Ingrese cualquier Cantidad de Segundos : ");
    scanf("%f",&segundos);
    horas = (segundos/3600);
    minutos = (segundos/60);
    printf("Lashoras : %.0f\n",horas);
    printf("Losminutos : %.0f\n",minutos);
    return 0;
}     
