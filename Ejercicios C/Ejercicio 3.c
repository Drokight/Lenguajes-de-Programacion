#include<stdio.h>
//Cambio de dólares a pesos. 
//Escribe un programa que pida al usuario un número de dólares y calcule el cambio en euros. 

void main(){
	int dolares;
	int convercion=823;
	printf("Ingrese la cantidad de dolares: ");
	scanf("%d", &dolares);
	int convertidos = dolares*convercion;
	printf("Son en total: %d",convertidos);
	printf(" pesos");
	
}
