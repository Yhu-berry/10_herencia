#include <iostream>
using namespace std;

class Vehiculo {
    protected:
        int numeroPlaca;
        string color;
        string marca;
        float velocimetro;
    public:
        Vehiculo();
        void mostrarDatos();
        void cambiarVelocidad(float nuevaVelocidad);
};  

Vehiculo::Vehiculo() {
    numeroPlaca = 0;
    color = "";
    marca = "";
    velocimetro = 0.0f;
}

void Vehiculo::mostrarDatos() {
    cout << "Número de Placa: " << numeroPlaca << endl;
    cout << "Color: " << color << endl;
    cout << "Marca: " << marca << endl;
    cout << "Velocímetro: " << velocimetro << " km/h" << endl;
}

void Vehiculo::cambiarVelocidad(float nuevaVelocidad) {
    velocimetro = nuevaVelocidad;
    cout << "Nueva velocidad: " << velocimetro << " km/h" << endl;
}

class Automovil : public Vehiculo {
    private:
        int cantPuert;
        int cantP;
    public:
        Automovil();
        void mostrarAutomovil();
        void subirPasajeros(int cantidad);
        void bajarPasajeros(int cantidad);
};

Automovil::Automovil() {
    cantPuert = 4;
    cantP = 0;
}

void Automovil::mostrarAutomovil() {
    mostrarDatos();
    cout << "Cantidad de Puertas: " << cantPuert << endl;
    cout << "Cantidad de Pasajeros: " << cantP << endl;
}

void Automovil::subirPasajeros(int cantidad) {
    cantP += cantidad;
    cout << "Subieron " << cantidad << " pasajeros. Total ahora: " << cantP << endl;
}

void Automovil::bajarPasajeros(int cantidad) {
    if (cantP >= cantidad) {
        cantP -= cantidad;
        cout << "Bajaron " << cantidad << " pasajeros. Total ahora: " << cantP << endl;
    } else {
        cout << "No hay suficientes pasajeros para bajar." << endl;
    }
}

int main() {
    Automovil miAuto;
    miAuto.mostrarAutomovil();
    miAuto.subirPasajeros(3);
    miAuto.bajarPasajeros(1);
    return 0;
}
