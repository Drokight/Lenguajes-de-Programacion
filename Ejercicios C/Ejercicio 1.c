#include<stdio.h>
//Cálculo de precios con descuento 
//Escribe un programa que pregunte el precio, el tanto por ciento de descuento, y te diga el precio con descuento. 
//Por ejemplo, si el precio que introduce el usuario es 300 y el descuento 20, 
//el programa dirá que el precio final con descuento es de 240. 

void main(){
	int precio;
	int descuento; 
	
	printf("Escriba el precio:");
	scanf("%d", &precio);
	
	printf("Ingrese el porcentaje de descuento:");
	scanf("%d", &descuento);
	
	int precioDescontado = precio - (precio * descuento/100);
	
	printf("Su nuevo precio es: %d", precioDescontado);
	
}
