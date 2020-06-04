//Cálculo de área y perímetro. 
//Escribe un programa que pregunte al usuario los dos lados de un rectángulo y 
//presente por pantalla el cálculo del perímetro (suma de los lados) y el área (base por altura). 

#include<stdio.h>
void main(){
	
	int lado1,lado2;
	
	printf("Lado 1: ");
	scanf("%d", &lado1);
	printf("Lado 2: ");
	scanf("%d", &lado2);
	
	int perimetro = lado1+lado1+lado2+lado2;
	int area = 2*lado1 * 2*lado2;
	printf("\nEl perimetro es: %d",perimetro);
	printf("\nEl area es: %d",area);
}
