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
