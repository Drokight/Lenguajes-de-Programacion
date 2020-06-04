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
