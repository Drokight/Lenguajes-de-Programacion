#include <iostream>
#include <conio.h>
#include <stdbool.h>
#include <string>
#include <time.h>
#include <cstdlib>
#include <ctime>

using namespace std;

class Figuras {
	public:
		int L[9];
		int A[9];
		Figuras();
		int llenarL();
		int mostrarL();
		int girar();
		char opcion;
};

/* Constructor vacío */
Figuras::Figuras() {
	
}

int Figuras::llenarL() {
	/* Este era para corroborar que al imprimirse
	salieran todos los números en orden.
	L[0] = 1; L[1] = 2; L[2] = 3;
	L[3] = 4; L[4] = 5; L[5] = 6;
	L[6] = 7; L[7] = 8; L[8] = 9;
	*/
	srand((int)time(0));
	int azar;
	azar = rand()%6;
	switch(azar){
		case 0: // L
			L[0] = 1; L[1] = 0; L[2] = 0;
			L[3] = 1; L[4] = 0; L[5] = 0;
			L[6] = 1; L[7] = 1; L[8] = 0;
			break;
		case 1: // J
			L[0] = 1; L[1] = 1; L[2] = 0;
			L[3] = 0; L[4] = 1; L[5] = 0;
			L[6] = 0; L[7] = 1; L[8] = 0;
			break;
		case 2: // O
			L[0] = 1; L[1] = 1; L[2] = 0;
			L[3] = 1; L[4] = 1; L[5] = 0;
			L[6] = 0; L[7] = 0; L[8] = 0;
			break;
		case 3: // T
			L[0] = 1; L[1] = 1; L[2] = 1;
			L[3] = 0; L[4] = 1; L[5] = 0;
			L[6] = 0; L[7] = 0; L[8] = 0;
			break;
		case 4: // S
			L[0] = 1; L[1] = 0; L[2] = 0;
			L[3] = 1; L[4] = 1; L[5] = 0;
			L[6] = 0; L[7] = 1; L[8] = 0;
			break;
		case 5: // Z
			L[0] = 1; L[1] = 1; L[2] = 0;
			L[3] = 0; L[4] = 1; L[5] = 1;
			L[6] = 0; L[7] = 0; L[8] = 0;
			break;
		default:
			break;
			
	}
	return 0;
}

int Figuras::mostrarL() {
	for (int i = 0; i < 9; i++) {
		if (L[i] == 0) {
			/* Con esto no se muestran los 0. */
			cout << "  ";
		} else {
			cout << L[i] << " ";
		}
		
		/*Con esto se hacen los saltos de línea cada 3 números
		sin contar el noveno */
		if ((i+1)%3 == 0 && i != 8) {
			cout << endl;
		}
	}
	
	return 0;
}

int Figuras::girar(){
	for(int i=0;i<9;i++){
		A[i] = L[i];
	}
	cout << endl << "Presione enter despues de seleccionar su opcion (a/d para girar)" << endl;
	char opcion;
	cin >> opcion;
	system("cls");
	switch(opcion){
		case 'W':
		case 'w':
			break;
		case 'S':
		case 's':
			break;
		case 'A':
		case 'a':
			L[0]=A[2];
			L[1]=A[5];
			L[2]=A[8];
			L[3]=A[1];
			L[5]=A[7];
			L[6]=A[0];
			L[7]=A[3];
			L[8]=A[6];
			break;
		case 'D':
		case 'd':
			L[0]=A[6];
			L[1]=A[3];
			L[2]=A[0];
			L[3]=A[7];
			L[5]=A[1];
			L[6]=A[8];
			L[7]=A[5];
			L[8]=A[2];
			break;
		default:
			break;
	}
	
	return 0;
}

int main() {
	Figuras Figura;
	
	Figura.llenarL();
	Figura.mostrarL();
	Figura.girar();
	Figura.mostrarL();
		
	cout << "\n";
	return 0;
}

/*
int[] Figura1::llenarL() {
	L[0] = 1; L[1] = 2; L[2] = 3;
	L[3] = 4; L[4] = 5; L[5] = 6;
	L[6] = 7; L[7] = 8; L[8] = 9;
	return L;
}*/



//int L[9];
//int linea[16];
//int triangulo[9];







/*
void llenarLinea() {
	linea[0] = 1; linea[1] = 2; linea[2] = 3; linea[3] = 4;
	linea[4] = 5; linea[5] = 6; linea[6] = 7; linea[7] = 8;
	linea[8] = 9; linea[9] = 10; linea[10] = 11; linea[11] = 12;
	linea[12] = 13; linea[13] = 14; linea[14] = 15; linea[15] = 16;
}

void mostrarLinea() {
	for (int i = 0; i < 4; i++) {
		cout << linea[i*4] << linea[(i+1)*4-3] << linea[(i+2)*4-6] << linea[(i+3)*4-9] << endl;
	}
}*/

/*class Figura(int tipo){
	
	if (tipo == 1) {
		
	}
};*/




/*linea[0] = 1; linea[1] = 0; linea[2] = 0; linea[3] = 0;
	linea[4] = 1; linea[5] = 0; linea[6] = 0; linea[7] = 0;
	linea[8] = 1; linea[9] = 0; linea[10] = 0; linea[11] = 0;
	linea[12] = 1; linea[13] = 0; linea[14] = 0; linea[15] = 0;
	
	L[0] = 1; L[1] = 0; L[2] = 0;
	L[3] = 1; L[4] = 0; L[5] = 0;
	L[6] = 1; L[7] = 1; L[8] = 0;*/
