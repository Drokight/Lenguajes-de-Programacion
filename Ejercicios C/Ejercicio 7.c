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
