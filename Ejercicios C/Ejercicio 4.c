#include<stdio.h>
//Cálculo de perímetro de circunferencia, área del círculo, y volumen de la esfera. 
//Suponiendo que pi = 3.1416. 
//Escribe un programa que pida al usuario que introduzca el radio, y 
//presente por pantalla el cálculo del perímetro de la circunferencia (2*pi*r), 
//el área del círculo (pi*r2 ), y el volumen de la esfera (V = 4*pi*r3 /3). 

void main(){
	int radio;
	float pi = 3.1416;
	float area, perimetro,volumen;
	
	printf("Ingrese el radio de la circunferencia: ");
	scanf("%d", &radio);
	
	area = pi*radio*radio;
	printf("\nEl area de la circunferencia es: %f",area);
	
	perimetro = 2*pi*radio;
	printf("\nEl perimetro es: %f ", perimetro);
	
	volumen = (4/3)*pi*radio*radio*radio;
    printf("\nEl volumen es: %f",volumen);
	
}
