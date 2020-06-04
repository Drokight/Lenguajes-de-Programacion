 #include<stdio.h>
 void main(){
 	int codigo, precio, cantidad, iva, descuento;
 	printf("Codigo de producto: ");
 	scanf("%d", &codigo);
 	
 	printf("Precio del producto: ");
 	scanf("%d", &precio);
 	
 	printf("Cantidad de productos: ");
 	scanf("%d", &cantidad);
 	
 	printf("IVA del producto: ");
 	scanf("%d", &iva);
 	
 	printf("Descuento del producto: ");
 	scanf("%d", &descuento);
 	
 	int precioFinal = precio*cantidad - (precio*cantidad * descuento/100) + ( precio*cantidad - (precio*cantidad * descuento/100) * iva/100);
 	printf("%d",precioFinal);
 	printf("El precio final es: %d",precioFinal);
 	printf(" pesos");
 	
 }
