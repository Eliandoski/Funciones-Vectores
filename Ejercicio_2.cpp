//Estudiante: Cifuentes González Elian
//Fecha de entrega: 14/07/2024
//Curso: 1ro de TI

//2) Diseñe la función que multiplica todos los elementos del vector por un número que pasa por parámetro

#include <iostream> 

using namespace std; 

// Función para multiplicar cada elemento de un vector por un número dado
void multiplicarVector(int x[], int total, int num) {
    for (int k = 0; k < total; ++k) {
        x[k] *= num;
    }
}

int main() {
    int x[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    int total = sizeof(x) / sizeof(int); 
    int multiplicador = 5; 

    cout << "Vector original: ";
    for (int k = 0; k < total; ++k) {
        cout << x[k] << " ";
    }
    cout << endl;

    multiplicarVector(x, total, multiplicador);

    cout << "Vector después de multiplicar: ";
    for (int k = 0; k < total; ++k) {
        cout << x[k] << " ";
    }
    cout << endl;

    return 0; 
}
