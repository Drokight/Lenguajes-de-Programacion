//Solución de la ecuación de segundo grado. Escribir un programa que pida por teclado los tres coeficientes 
//(a, b y c) de la ecuación ax 2 +bx+c=0 y calcule las dos soluciones suponiendo que ambas serán reales 
//(es decir que la raíz queda positiva). Nota: x1,2=(a±sqrt(b2 -4ac))/2, sqrt es una función que devuelve 
//la raíz cuadrada, para poder invocarla es necesario poner en la cabecera del programa: #include <math.h>

#include<stdio.h>
#include <math.h>
void main(){
	double a, b, c, discriminante, solucion1, solucion2;
	
	printf("Entregue un valor para a: ");
	scanf("%lf",&a);
	printf("Entregue un valor para b: ");
	scanf("%lf",&b);
	printf("Entregue un valor para c: ");
	scanf("%lf",&c);
	
	discriminante = b*b - 4*a*c;
	
	if(discriminante > 0){
		solucion1 = (-b + sqrt(discriminante)) / (2 * a);
        solucion2 = (-b - sqrt(discriminante)) / (2 * a);
        printf("Solucion 1 = %.2lf y solucion 2 = %.2lf", solucion1, solucion2);
	}else if (discriminante == 0){
		solucion1 = solucion2 = -b / (2 * a);
        printf("Solucion 1 = Solucion 2 = %.2lf;", solucion1);
	}else{
		printf("Esos valores entregan un valor imaginario, lo cual no es contemplado en este ejercicio");
	}
}
