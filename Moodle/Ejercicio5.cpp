#include <iostream>
using namespace std;


class Fraccion
{
	private:
		int numerador;
		int denominador;
		int mcd();

	public:
		Fraccion(int = 4, int = 5);

		double division();
		void reducir();

};

Fraccion::Fraccion(int num, int den)
{
	numerador = num;
	denominador = den;
}

double Fraccion::division(){
	return (numerador * 1.0)/(denominador * 1.0);
}

void Fraccion::reducir(){
	int comun = mcd();
	int num = numerador/comun;
	int den = denominador/comun;

	cout << "La expresión mínima de: " << numerador << "/" 
			<< denominador << " es: " << num << "/" << den 
			<< "\n";

}

int Fraccion::mcd(){
	int m = numerador;
	int n = denominador;

	while(m!=n){
		if(m>n)
			m = m - n;
		else
			n = n - m;
	}
	return m;
}

int main()
{
	Fraccion a(148, 12);

	cout << "La división es: " << a.division() << "\n";
	a.reducir();

	return 0;
}