#include <iostream>
using namespace std;

int main()
{
	const  double PI = 3.1415926;
	int radio;

	cout << "Ingrese radio del círculo.\n";
	cin >> radio;
	cout << "El área es "; 
	cout << (radio*2)*PI;
	cout << "\n";
 

	return 0;
}