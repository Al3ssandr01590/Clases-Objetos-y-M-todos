#include <iostream>
#include <string>

using namespace std;

// Definición de la clase Persona
class Persona {
private:
    string nombre;
    int edad;
    char genero;

public:
    Persona(const string& n, int e, char g) : nombre(n), edad(e), genero(g) {}

    void imprimirInformacion() {
        cout << "Nombre: " << nombre << endl;
        cout << "Edad: " << edad << endl;
        cout << "Género: " << genero << endl;
    }
};

// Definición de la clase Estudiante que hereda de Persona
class Estudiante : public Persona {
private:
    int numeroEstudiante;
    float promedioCalificaciones;

public:
    // Constructor que llama al constructor de Persona
    Estudiante(const string& n, int e, char g, int numEst, float promCal) : Persona(n, e, g), numeroEstudiante(numEst), promedioCalificaciones(promCal) {}

    // Métodos para establecer y obtener valores específicos de Estudiante
    void setNumeroEstudiante(int numEst) {
        numeroEstudiante = numEst;
    }

    int getNumeroEstudiante() {
        return numeroEstudiante;
    }

    void setPromedioCalificaciones(float promCal) {
        promedioCalificaciones = promCal;
    }

    float getPromedioCalificaciones() {
        return promedioCalificaciones;
    }

    // Método para imprimir información específica del estudiante
    void imprimirInformacionEstudiante() {
        imprimirInformacion(); // Llama al método imprimirInformacion de Persona
        cout << "Número de estudiante: " << numeroEstudiante << endl;
        cout << "Promedio de calificaciones: " << promedioCalificaciones << endl;
    }
};

int main() {
    // Crear objetos de la clase Estudiante y utilizar métodos heredados y propios
    Estudiante estudiante1("Juan", 20, 'M', 12345, 8.5);
    Estudiante estudiante2("Maria", 22, 'F', 54321, 9.0);

    // Utilizar método heredado de Persona
    cout << "Información de estudiante 1:" << endl;
    estudiante1.imprimirInformacion();

    cout << endl;

    // Utilizar método específico de Estudiante
    cout << "Información específica de estudiante 2:" << endl;
    estudiante2.imprimirInformacionEstudiante();

    return 0;
}
