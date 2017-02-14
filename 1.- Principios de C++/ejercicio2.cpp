#include <iostream>
using namespace std;

int main()
{
	const  double PI = 3.1415926;
	float flotante = 5.1245;
	int entero = 7, ent = 12;
	
	cout << "Division entre entero y entero 7/12 = " << entero/ent << "\n";
	cout << "Division entre float y entero 5.1245/12 = " << flotante/ent << "\n";
	cout << "Division entre entero y float 12/5.1245 = " << ent/flotante << "\n";

 

	return 0;
}