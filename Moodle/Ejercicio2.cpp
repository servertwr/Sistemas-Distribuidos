#include <iostream>
using namespace std;


int main()
{
   int tiempo;
	cout << "Ingrese el tiempo de caida (segundos)\n";
	cin >> tiempo; 

	cout <<"La altura del edificio es: " << 0.5*(9.81)*(tiempo^2) << "\n";

}