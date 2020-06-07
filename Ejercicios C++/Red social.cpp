#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <array>
#include <string>

using namespace std;
//NOTA: string[] guarda solo una palabra, por lo que en vez de usar espacio en el programa favor de utilizar "_"
int main(void){
	int opcion, contador2, contador4, contador6;
	int user = 0;
	//contador1 es para ayudar a usuarios[][], contador3 es para mensajes[][] y contador5 es para muro[][].
	int contador1 = 0;
	int contador3 = 0;
	int contador5 = 0;
	//usuario[][0] es para guardar el correo, usuario[][1] para guardar el nombre y usuario[][2] para guardar el apellido.
	string usuario[10][3];
	//fecha[][0] es para guardar el dia, fecha[][1] para guardar el mes y fecha[][2] para guardar el año de nacimiento.
	int fecha[10][3];
	//mensajes[][0] es para guardar el nombre del destinatario y mensajes [][1] es para guardar el mensaje.
	string mensajes[10][2];
	//muro[][0] es para guaradar el titulo del post y muro[][1] es para guardar el post en si.
	string muro[10][2];
	bool bandera1 = true, bandera2=true;
	
	
	cout << "Bienvenido, seleccione una de las siguientes opciones:" << endl;
	while(bandera1==true){
		//Como el trabajo se debia realizar sin el uso de Arraylist se dejó un Array de tamaño para 10 usuarios.
		cout << endl << "1. Crear usuarios" << endl;
		cout << "2. Ingresar con usuario" << endl;
		cout << "3. Salir" << endl;
		cin >> opcion;
	
		switch(opcion){
			case 1:
				cout << "Correo: ";
				cin >> usuario[contador1][0];
				cout << "Nombre: ";
				cin >> usuario[contador1][1];
				cout << "Apellido: " ;
				cin >> usuario[contador1][2];
				cout << "Ahora se necesita su fecha de nacimiento, ingrese el dia: ";
				cin >> fecha[contador1][0];
				cout << "Mes: ";
				cin >> fecha[contador1][1];
				cout << "Año: ";
				cin >> fecha[contador1][2];
				contador1++;
				break;
			case 2:
				cout << "Con que usuario desea ingresar? " << endl;
				for(contador2=0;contador2<contador1;contador2++){
					cout << "------------------Usuario " << contador2+1 << "------------------" << endl;
					cout << "Correo: " << usuario[contador2][0] << endl;
					cout << "Nombre completo: " << usuario[contador2][1] << " " << usuario[contador2][2] << endl;
					cout << "Fecha de nacimiento: " << fecha[contador2][0] << "-" << fecha[contador2][1] << "-" << fecha[contador2][2] << endl;
				}
				cin >> user;
				break;
			case 3:
				cout << "El programa se cerrara";
				bandera1 = false;
				bandera2 = false;
				break;
			default:
				cout << "Esa opcion no es valida";
				break;
		}
		if(user!=0){
			bandera1 = false;
			user--;
		}
	}
	
	
	while(bandera2){
		cout << endl << "Bienvenido " << usuario[user][1] << endl;
		//Nuevamente se creo un limite similar al de usuarios, por lo que se puede enviar hasta 10 mensajes y 10 posteos.
		cout << endl << "Seleccione entre las siguientes opciones: " << endl;
		cout << "1.Enviar mensaje" << endl;
		cout << "2.Revisar mensajes enviados" << endl;
		cout << "3.Postear en su muro" << endl;
		cout << "4.Revisar post realizados" << endl;
		cout << "5.Salir de la aplicacion" << endl;
		cin >> opcion;
	
		switch(opcion){
			case 1:
				cout << "A quien desea enviar un mensaje?" << endl;
				cin >> mensajes[contador3][0];
				cout << "Que desea enviar?" << endl;
				cin >> mensajes[contador3][1];
				contador3++;
				break;
			case 2:
				for(contador4=0;contador4<contador3;contador4++){
					cout << "------------------Mensaje " << contador4+1 << "------------------" << endl;
					cout << "Destinatario: " << mensajes[contador4][0] << endl;
					cout << "Mensaje: " << mensajes[contador4][1] << endl;
				}
				break;
			case 3:
				cout << "Que titulo desea colocar para el post?" << endl;
				cin >> muro[contador5][0];
				cout << "Que mensaje desea colorar en su muro?" << endl;
				cin >> muro[contador5][1];
				contador5++;
				break;
			case 4:
				for(contador6=0;contador6<contador5;contador6++){
					cout << "------------------Post " << contador6+1 << "------------------" << endl;
					cout << "Titulo: " << muro[contador6][0] << endl;
					cout << "Post: " << muro[contador6][1] << endl;
				}
				break;
			case 5:
				cout << "Gracias por utilizar nuestra aplicacion, " << usuario[user][1] << ", que tenga un buen dia.";
				bandera2 = false;
				break;
			default:
				cout << "Esa opcion no es valida";
				break;
		}
	
	}
}
