#include <iostream>
using namespace std;

double abs(double num)
{
	if(num < 0)
		return (-1)*num;
	else
		return num;
}

double sqr(double num)
{
	double azar = 1.0;
	int i;

	for(i = 0; i < 10; i++){
		azar = (azar + (num / azar))/2;
	
	}

	return azar;
}


int main()
{
	double num, raiz;

	cout << "Ingrese número \n";
	cin >> num;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(4);

	if(num > 0){
		raiz = sqr(num);
		cout << "La raíz es: " << raiz;
	}else{
		cout << "ERROR: El número es negativo.";
	}

	return 0;
}