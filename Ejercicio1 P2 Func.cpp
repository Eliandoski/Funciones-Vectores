//Estudiante: Cifuentes González Elian
//Fecha de entrega: 14/07/2024
//Curso: 1ro de TI

/*1) 
- Diseñe la función que busca un número entero y devuelve la cantidad de veces que existe ese número en el vector
- Diseñe la función que convierte un entero en su equivalente en binario. El resultado del número binario se debe 
guardar en un vector*/

#include <iostream>

using namespace std;

// Función para convertir un número entero a binario
void ConvertirBinario(int num)
{
    int MAX = 16;
    int x[MAX]; 
    int numOrig = num;

    for (int k = 0; k < MAX; k++)
        x[k] = 0;

    int cont = 0;
    while (num > 0)
    {
        int resto = num % 2; 
        x[cont] = resto; 
        cont++; 
        num = num / 2; 
    }

    cout << endl << "El número " << numOrig << " en binario es: ";
    for (int k = (cont - 1); k >= 0; k--) 
        cout << x[k];
}

int main()
{
    ConvertirBinario(135);
    ConvertirBinario(245);
   
    return 0;
}