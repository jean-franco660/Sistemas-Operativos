#include <iostream>
using namespace std;

int main() {
    int num1;
    int num2;
    int multiplicacion;
    int resta;
    int suma;
    float division;

    // Solicitar al usuario que ingrese dos números
    cout << "Ingrese un número: ";
    cin >> num1;

    cout << "Ingrese otro número: ";
    cin >> num2;

    // Realizar las operaciones
    multiplicacion = num1 * num2;
    resta = num1 - num2;
    suma = num1 + num2;
    division = static_cast<float>(num1) / num2; // Convertir uno de los operandos a float para obtener el resultado decimal

    // Mostrar los resultados de las operaciones
    cout << "La multiplicación es: " << multiplicacion << endl;
    cout << "La resta es: " << resta << endl;
    cout << "La suma es: " << suma << endl;
    cout << "La división es: " << division << endl;

    return 0;
}

