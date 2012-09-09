#include <stdio.h>
void main(){
float cent, kelvin;

printf("\nIntroduce una cantidad en grados centigrados:  ");
scanf("%f",&cent);

kelvin = cent + 273.15;

printf("\n\nLa conversion a grados Kelvin es: %f \n\n", kelvin);
}
