//Pasar de días, horas y minutos a segundos. Escribe un programa que pida al usuario los siguientes datos: 
//días, horas y minutos. Y le conteste con la cantidad de segundos totales que son esos datos. 

#include<stdio.h>
void main(){
	int dias, horas, minutos, segundos;
	
	printf("Indique los dias: ");
	scanf("%d", &dias);
	
	printf("Indique los horas: ");
	scanf("%d", &horas);
	
	printf("Indique los minutos: ");
	scanf("%d", &minutos);
	
	segundos = (minutos*60) + (horas*3600) + (dias*86400);
	printf("En total los %d segundos",segundos);
}
