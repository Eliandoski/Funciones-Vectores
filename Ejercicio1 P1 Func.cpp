//Estudiante: Cifuentes González Elian
//Fecha de entrega: 14/07/2024
//Curso: 1ro de TI

/*1) 
- Diseñe la función que busca un número entero y devuelve la cantidad de veces que existe ese número en el vector
- Diseñe la función que convierte un entero en su equivalente en binario. El resultado del número binario se debe 
guardar en un vector*/

#include <iostream>

using namespace std;

// Función para buscar cuántas veces aparece un número en un arreglo
int BuscaNumero(int x[], int total, int num)
{
    int cont = 0; 
    for (int k = 0; k < total; k++)
    {
        if (x[k] == num) 
            cont++; 
    }
    return cont;
}

int main()
{
    int x[] = {77, 20, 77, 45, 10, 45, 77, 10, 1, 77, 3};

    int total = sizeof(x) / sizeof(int); 

    int num = 77; 

    int cont = BuscaNumero(x, total, num);
    
    cout << endl << "El entero " << num << " existe " << cont << " veces en el arreglo";

    return 0; 
}