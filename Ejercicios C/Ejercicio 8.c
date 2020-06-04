//Cálculo de la resistencia equivalente. Escribir un programa que pida por teclado 
//dos resistencias y calcule y presente la resistencia equivalente en paralelo (Req=(R1*R2)/(R1+R2)). 

#include<stdio.h>
void main(){
	double resistenciaE, resistencia1, resistencia2;
	
	printf("Por favor, ingrese la resistencia 1: ");
	scanf("%lf",&resistencia1);
	
	printf("Por favor, ingrese la resistencia 2: ");
	scanf("%lf",&resistencia2);
	
	resistenciaE = ((resistencia1*resistencia2)/(resistencia1+resistencia2));
	printf("La resistencia equivalente es: %lf",resistenciaE);

}
