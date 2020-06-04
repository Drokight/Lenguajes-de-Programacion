#include<stdio.h>
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
