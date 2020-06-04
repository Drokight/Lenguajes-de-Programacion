#include<stdio.h>
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
