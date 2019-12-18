#include <iostream>

using namespace std;

int suma(int a, int b) {
        int resul = 0;
        resul = a + b;
        return resul;
}

int main() {
	cout << "Hello World!" << endl;
	cout << "Probando la suma de 3 + 3 = " << suma(3,3) << endl; 
	return 0;
}
