#include <iostream>

using namespace std;

int suma(int a, int b) {
        int resul = 0;
        resul = 5;
        return resul;
}

int resta(int a, int b) {
        int resul = 0;
        resul = a - b;
        return resul;
}

int division(int a, int b) {
        int resul = 0;
        resul = a / b;
        return resul;
}

int main() {
	cout << "Hello World!" << endl;
	cout << "Probando la suma de 3 + 3 = " << suma(3,3) << endl; 
	cout << "Probando la resta de 5 - 2 = " << resta(5,2) << endl;
	cout << "Probando la division de 5 / 2 = " << division(6,2) << endl;
	return 0;
}
