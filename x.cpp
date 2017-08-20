#include <iostream>

using namespace std;

int main() {
	int *p, **q, x=4;
	
	p = &x;
	q = &p;
	
	cout << "Direccion x: " << *q << endl;
	cout << "Valor q: " << **q << endl;
			
	return 0;
}

