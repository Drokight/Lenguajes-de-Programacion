//Media de cuatro números. Escribir un programa que pida por teclado cuatro números y calcule y presente la media de los cuatro.

#include<stdio.h>
void main(){
	double resultado;
	int a,b,c,d;
	
	printf("Ingrese el valor 1: ");
	scanf("%d",&a);
	printf("Ingrese el valor 2: ");
	scanf("%d",&b);
	printf("Ingrese el valor 3: ");
	scanf("%d",&c);
	printf("Ingrese el valor 4: ");
	scanf("%d",&d);
	
	resultado= a+b+c+d;
	resultado/=4;
	printf("La media de los cuatro valores es %lf",resultado);
}
