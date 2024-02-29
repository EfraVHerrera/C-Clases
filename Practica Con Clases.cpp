#include <iostream>
#include <string>
using namespace std;

class Usuario {
	string nombre;
	string apellido;
	
public:
	Usuario(string nombre, string apellido) {
		this->nombre = nombre;
		this->apellido = apellido;
	}
	
	// Getter para el atributo nombre
	string getNombre() {
		return nombre;
	}
	
	// Setter para el atributo nombre
	void setNombre(string nombre) {
		this->nombre = nombre;
	}
	
	// Getter para el atributo apellido
	string getApellido() {
		return apellido;
	}
	
	// Setter para el atributo apellido
	void setApellido(string apellido) {
		this->apellido = apellido;
	}
};

int main() {
	// Crear un objeto de la clase Usuario
	Usuario usuario1("John", "Doe");
	
	// Imprimir el nombre y apellido actual del usuario
	cout << "Nombre del usuario: " << usuario1.getNombre() << endl;
	cout << "Apellido del usuario: " << usuario1.getApellido() << endl;
	
	return 0;
}

