#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int i, serie, cont = 0;

    long long int cantidadMax[100];

    cantidadMax[0] = 0;
    cantidadMax[1] = 1;

    cout << "Serie de que cantidad = ";

    cin >> serie;

    cout << "\n";

    for(i=1; i < serie; i++){

        cantidadMax[i+1] = cantidadMax[i-1] + cantidadMax[i];

    }


    for(i=0; i < serie; i++){

        if (cont == 10){

            cout << "\n";

            cont = 0;

        }

        cout << cantidadMax[i] << " ";

        cont += 1;

    }

    cout << "\n";

}
