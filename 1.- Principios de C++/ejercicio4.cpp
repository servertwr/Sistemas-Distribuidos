#include <iostream>
using namespace std;

int main()
{
/*
	const  double PI = 3.1415926;
	float flotante = 5.1245;
	int entero = 7, ent = 12;
*/
	double c = 20;
	double f;
	f = (static_cast<double>(9)/static_cast<double>(5)) * c + 32.0;
	
	cout << "Grados " << f << "\n";


	return 0;
}