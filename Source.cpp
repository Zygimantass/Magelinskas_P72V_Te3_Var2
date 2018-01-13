#include <iostream>
#include "Singleton.h";

using namespace std;

int main () {
	setlocale(LC_ALL, "Lithuanian");

	//Singleton* instance = Singleton::Instance();

	cout << "Áveskite pirmo daugiakampio virðuniø skaièiø: "; cin >> Singleton::Instance()->n1;
	cout << "Áveskite antro daugiakampio virðuniø skaièiø: "; cin >> Singleton::Instance()->n2;

	cout << endl;

	cout << "Pirmojo daugiakampio kampø suma " << Singleton::Instance()->skaiciuotiSuma(Singleton::Instance()->n1) << endl;
	cout << "Antrojo daugiakampio kampø suma: " << Singleton::Instance()->skaiciuotiSuma(Singleton::Instance()->n2) << endl;
}