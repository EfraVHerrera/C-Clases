#include <iostream>
using namespace std;

class ejemplo {
	int iprivado, isegundo;
	
public:
	ejemplo(int valor, int valor2) {
		this->iprivado = valor;
		this->isegundo = valor2;
	}
	
	int get_iprivado() {
		return iprivado;
	}
	
	int get_isegundo() {
		return isegundo;
	}
	
	void set_iprivado(int valor) {
		if (valor > 0)
			iprivado = valor;
	}
	
	void set_isegundo(int valor) {
		if (valor > 0)
			isegundo = valor;
	}
	
	void set_ejemplo(int valor, int valor2) {
		if (valor > 0 && valor2 > 0) {
			iprivado = valor;
			isegundo = valor2;
		}
	}	
	
	// Destructor
	~ejemplo() {
		iprivado = -1;
		isegundo = -1;
		cout << "Se esta ejecutando el DESTRUCTOR" << endl;
	}
};

int main(int argc, char *argv[]) {
	ejemplo objeto1(0, 0);
	cout << "Objeto1 atributo iprivado: " << objeto1.get_iprivado() << endl;
	objeto1.set_iprivado(100);
	cout << "Objeto1 atributo iprivado: " << objeto1.get_iprivado() << endl;
	objeto1.set_iprivado(-20);
	cout << "Objeto1 atributo iprivado: " << objeto1.get_iprivado() << endl;
	return 0;
}

