//Estudiante: Cifuentes González Elian
//Fecha de entrega: 14/07/2024
//Curso: 1ro de TI

/*4) Una función recibe como parámetro un vector de enteros. La función debe determinar si cada uno de estos elementos 
es primo o no. La función debe devolver la sumatoria de los números primos que se encontraron en el vector*/

#include <iostream> 

using namespace std; 

// Función para verificar si un número es primo
bool esPrimo(int num) {
    if (num <= 1) return false; 
    for (int k = 2; k * k <= num; k++) { 
        if (num % k == 0) 
            return false; 
    }
    return true; 
}

// Función para sumar los números primos en un vector
int sumarPrimos(int x[], int total) {
    int suma = 0; 
    for (int k = 0; k < total; ++k) {
        if (esPrimo(x[k])) {
            suma += x[k]; 
        }
    }
    return suma; 
}

int main() {
    int x[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
    int total = sizeof(x) / sizeof(int); 

    int resultado = sumarPrimos(x, total); 
    cout << "La suma de los números primos es: " << resultado << endl; 

    return 0;
}