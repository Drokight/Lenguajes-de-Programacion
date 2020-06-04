//Pasar de segundos a días, horas y minutos. Escribe un programa que pida al usuario 
//que introduzca los segundos, y le conteste diciéndole el número de días, horas, minutos y segundos que son. 

#include<stdio.h>
void main(){
	int segundos, minutos, horas, dias;
	
	printf("Indique la cantidad de segundos: ");
	scanf("%d",&segundos);
	
	dias = segundos / 86400;
	segundos %= 86400;
	
	horas = segundos/3600;
	segundos %= 3600;
	
	minutos = segundos/60;
	segundos %= 60;
	
	printf("Dias: %d",dias);
	printf("\nHoras: %d",horas);
	printf("\nMinutos: %d",minutos);
	printf("\nSegundos: %d",segundos);
}
