// 3KLSC-CésarTrujillo-02.cpp.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
const int NUM = 8;
int main()
{
    int arreglo[NUM];
    int total = 0;
    for (int i = 0; i < NUM; i++) {

        cout << "Ingrese el dígito en la posicion " << i << ": ";
        cin >> arreglo[i];
        total += arreglo[i];
    }

    cout << "El resultado es: " << total << endl;

    system("pause");
    return 0;
}

