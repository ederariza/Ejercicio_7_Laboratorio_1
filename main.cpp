/*
Ejercicio 7. Escriba un programa que pida un número N e imprima en pantalla la suma de todos
los números entre 0 y N (incluyéndose el mismo).
Ej: si se ingresa 5: 1+2+3+4+5=15, por lo que se debe imprimir:
La sumatoria desde 0 hasta 5 es: 15
 */

#include <iostream>
using namespace std;

int main(){

    int numero_N;
    cout << "Ingrese un numero N: ";
    cin >> numero_N;

    int suma = 0;
    for (int i=0; i<=numero_N; i++){
        suma += i;
        cout << i;

        if (i != numero_N)
            cout << " + ";
    }

    cout << "\nLa sumatoria desde 0 hasta " << numero_N << " es " << suma << endl;

    return 0;
}
