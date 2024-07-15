//Estudiante: Cifuentes González Elian
//Fecha de entrega: 14/07/2024
//Curso: 1ro de TI

/*3) Diseñe la función que suma las posiciones(índice) pares del vector y el resultado final lo multiplica por 100. 
Las posiciones impares del vector primero las multiplica por 2 y luego las suma. La función debe devolver la división 
de las 2 sumatorias realizadas previamente*/

#include <iostream>

using namespace std;

/*Función que suma las posiciones pares del vector y el resultado final lo multiplica por 100 y suma las 
posiciones impares del vector primero las multiplica por 2 y luego las suma para finalmente dividir las 2 sumatorias*/
int SumaVector(int x[], int total) {
    int sumaPar = 0;
    int sumaImpar = 0;

    for (int k = 0; k < total; ++k) {
        if (k % 2 == 0) {
            sumaPar += x[k];
        } else {
            sumaImpar += x[k] * 2;
        }
    }

    sumaPar *= 100;

    if (sumaImpar == 0) {
        cerr << "Error al dividir por cero" << endl;
        return 0; 
    }

    return sumaPar / sumaImpar;
}

int main() {
    int x[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int total = sizeof(x) / sizeof(int);

    int resultado = SumaVector(x, total);
    cout << "Resultado del Vector: " << resultado << endl;

    return 0;
}
