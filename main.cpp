#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int DIAS = 7;

int main() {
    string nombresDias[DIAS] = { "Lunes", "Martes", "Miercoles", "Jueves",
                                 "Viernes", "Sabado", "Domingo" };
    double ventas[DIAS];

    double total = 0;
    double promedio = 0;
    double mayor, menor;
    int posMayor = 0, posMenor = 0;
    int diasSobrePromedio = 0;

    cout << fixed << setprecision(2);

    cout << "===== REGISTRO DE VENTAS - COLMADO DON PEPE =====" << endl;
    for (int i = 0; i < DIAS; i++) {
        cout << "Ventas del " << nombresDias[i] << ": RD$ ";
        cin >> ventas[i];

        while (ventas[i] < 0) {
            cout << "  Error: la venta no puede ser negativa." << endl;
            cout << "Ventas del " << nombresDias[i] << ": RD$ ";
            cin >> ventas[i];
        }
    }

    cout << endl << "===== VENTAS DEL COLMADO DON PEPE =====" << endl;
    for (int i = 0; i < DIAS; i++) {
        cout << nombresDias[i] << ": RD$ " << ventas[i] << endl;
    }
    cout << "---------------------------------------" << endl;

    mayor = ventas[0];
    menor = ventas[0];
    for (int i = 0; i < DIAS; i++) {
        total += ventas[i];

        if (ventas[i] > mayor) {
            mayor = ventas[i];
            posMayor = i;
        }
        if (ventas[i] < menor) {
            menor = ventas[i];
            posMenor = i;
        }
    }

    promedio = total / DIAS;

    for (int i = 0; i < DIAS; i++) {
        if (ventas[i] > promedio) {
            diasSobrePromedio++;
        }
    }

    cout << "Total semanal: RD$ " << total << endl;
    cout << "Promedio diario: RD$ " << promedio << endl;
    cout << "Mayor venta: " << nombresDias[posMayor] << " (RD$ " << mayor << ")" << endl;
    cout << "Menor venta: " << nombresDias[posMenor] << " (RD$ " << menor << ")" << endl;

    cout << "Dias sobre el promedio: " << diasSobrePromedio;
    if (diasSobrePromedio > 0) {
        cout << " -> ";
        bool primero = true; 
        for (int i = 0; i < DIAS; i++) {
            if (ventas[i] > promedio) {
                if (!primero) {
                    cout << ", ";
                }
                cout << nombresDias[i];
                primero = false;
            }
        }
    }
    cout << endl;

    return 0;
}
