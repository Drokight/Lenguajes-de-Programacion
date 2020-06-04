#include <stdio.h>

void main(){
	int numero, cantidad, i;
	printf("Por favor digite su numero: ");
	scanf("%d", &numero);
	
	if((numero >= 4000) || (numero <= 0)){
		printf("Numero invalido");
	}else{
		//2321
		//MMCCCXXI
		if(numero>=1000){
			cantidad = (numero/1000);
			for(i=0; i<cantidad;i++){
				printf("M");
			}
			numero %= 1000;
		}
		if(numero>=100){
			cantidad = (numero/100);
			if(cantidad == 9){
				printf("CM");
			}else if (cantidad >=5){
				printf("D");
				for(i=0;i<cantidad-5;i++){
					printf("C");
				}
			}else if(cantidad == 4){
				printf("CD");
			}else if(cantidad>=1){
				for(i=0; i<cantidad;i++){
				printf("C");
				}
			}
			numero %= 100;
		}
		if(numero>=10){
			cantidad = (numero/10);
			if(cantidad == 9){
				printf("XC");
			}else if (cantidad >=5){
				printf("L");
				for(i=0;i<cantidad-5;i++){
					printf("X");
				}
			}else if(cantidad == 4){
				printf("XL");
			}else if(cantidad>=1){
				for(i=0; i<cantidad;i++){
				printf("X");
				}
			}
			numero %= 10;
		}
		if(numero>=1){
			if(numero == 9){
				printf("IX");
			}else if (numero >=5){
				printf("V");
				for(i=0;i<numero-5;i++){
					printf("I");
				}
			}else if(numero == 4){
				printf("IV");
			}else if(numero>=1){
				for(i=0; i<numero;i++){
				printf("I");
				}
			}
		}
	}
}
