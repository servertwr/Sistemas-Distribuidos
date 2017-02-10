#include <iostream>
using namespace std;

int main()
{
	const  double PI = 3.1415926;
	float flotante = 5.1245;
	int entero = 7, ent = 12;

	double precio = 78.7;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	cout << "Precio" << precio << "\n";


	return 0;
}