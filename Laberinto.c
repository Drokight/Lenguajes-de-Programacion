#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>

void gotoxy(int x,int y){
	HANDLE consola;
	consola = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos;
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(consola, pos);
}

void main() {
	
	printf("------------------------------------------------------TUTORIAL-------------------------------------------------------\n");
	printf("Te mueves con las teclas W (Arriba), A (Izquierda), S (Abajo) y D (Derecha)\n");
	printf("Tu personaje es *\n");
	printf("Te encuentras en un lugar oscuro, frio y desconocido, te encuentras descalzo, sabes que necesitas escapar.\n");
	printf("Afortunadamente observas una escalera (#) para escapar de donde sea que estes\n");
	printf("En tu camino hay caminos seguros (0) y otros con puas en el piso (1), pasar por ahi seguro lastimara tus pies.\n");
	printf("Tienes 3 vidas, Podras escapar?\n");
	printf("En cualquier momento puedes oprimir Z para cerrar el juego\n");
	system("pause");
	system("cls");
	
	
	int laberinto[5][5];
	int i, j;
	srand(time(NULL));
	
	for(j=0;j<5;j++){
		for(i=0;i<5;i++){
			laberinto[i][j] = rand() % 2;
		}
	}
	
	laberinto[0][0] = 2;
	laberinto[4][4] = 0;
	
	for(j=0;j<5;j++){
		for(i=0;i<5;i++){
			// Ojo, acá se crea un espacio entre cada número en el eje X, por lo que habría que moverse 2 espacios
			// para ponerse encima de cada número con el asterisco. Para no tener que apretar 2 veces la tecla A o D,
			// habría que borrar los espacios del eje X, o bien, que al moverse por el eje X se mueva 2 espacios.
			printf("%d ", laberinto[i][j]);
		}
		printf("\n");
	}
	gotoxy(0,0);
	printf("#");
	
	
	
	
	// -- Mover asterisco con WASD -- //
	
	
	char opcion;
	int x = 4;
	int y = 4;
	int numActual = laberinto[x][y];
	int vidas = 3;
	bool salirBordes;
	
	while(opcion!= 'z' && vidas != 0 && numActual != 2) {
		salirBordes = false;
		
		gotoxy((x*2),y);
		printf("*");
		
		if(numActual==0){
			gotoxy(13,2);
			printf("--Estas sobre piso seguro--");
		}else if(numActual==1){
			gotoxy(13,2);
			printf("--Estas sobre una pua----");
		}
		
		
		gotoxy(1,6);
		printf("Vidas: %d", vidas);
		
		gotoxy((x*2),y);
		opcion = getch();
		
		
		switch(opcion) {
			case 'w':
				printf("%d", numActual);
				y--;
				if(y < 0) {
					y++;
					salirBordes = true;
					break;
				}
				break;
			case 's':
				printf("%d", numActual);
				y++;
				if(y > 4) {
					y--;
					salirBordes = true;
					break;
				}
				break;
			case 'a':
				printf("%d", numActual);
				x--;
				if(x < 0) {
					x++;
					salirBordes = true;
					break;
				}
				break;
			case 'd':
				printf("%d", numActual);
				x++;
				if(x > 4) {
					x--;
					salirBordes = true;
					break;
				}
				break;
		}
		
		numActual = laberinto[x][y];
		
		if (numActual == 1 && salirBordes == false) {
			vidas--;
		}
		
	}
	
	system("cls");
	
	if (vidas == 0) {
		printf("Has muerto :c");
	}
	
	if (numActual == 2) {
		printf("Felicidades! Has logrado escapar!");
	}
	
	if (opcion == 'z') {
		printf("Juego cerrado.");
	}
	
	
	
	
	
	// -- Mover asterisco con FLECHAS -- //
	
	
	/*
	ARRIBA = 0x26
	ABAJO = 0x28
	IZQUIERDA = 0x25
	DERECHA = 0x27
	*/
	
	/*
	char opcion;
	int x = 5;
	int y = 5;
	
	while (opcion!= 'z') {
		Sleep(50);     // Esto es un delay de milisegundos. Si tiene poco delay, se moverá 2 espacios antes de soltar la flecha,
		gotoxy(x, y);  // pero si tiene harto delay, alcanzas a soltar la flecha antes de que se mueva los 2 espacios, pero todas
		printf("*");   // las demás acciones se volverán más lentas.
		opcion = getch();
		
		// ARRIBA
		if (GetAsyncKeyState(0x26)) {
			gotoxy(x, y);
			printf(" ");
			
			y--;
			gotoxy(x, y);
			printf("*");
		}
		
		// ABAJO
		if (GetAsyncKeyState(0x28)) {
			gotoxy(x, y);
			printf(" ");
			
			y++;
			gotoxy(x, y);
			printf("*");
		}
		
		// IZQUIERDA
		if (GetAsyncKeyState(0x25)) {
			gotoxy(x, y);
			printf(" ");
			
			x--;
			gotoxy(x, y);
			printf("*");
		}
		
		// DERECHA
		if (GetAsyncKeyState(0x27)) {
			gotoxy(x, y);
			printf(" ");
			
			x++;
			gotoxy(x, y);
			printf("*");
		}
		
		
	}
	
	*/

//https://articulosvirtuales.com/articles/educacion/como-hacer-caritas-y-simbolos-utilizando-el-codigo-ascii
}
