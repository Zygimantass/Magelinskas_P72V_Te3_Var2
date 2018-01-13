#include <iostream>
#include "Singleton.h";

using namespace std;

int main () {
	setlocale(LC_ALL, "Lithuanian");

	//Singleton* instance = Singleton::Instance();

	cout << "�veskite pirmo daugiakampio vir�uni� skai�i�: "; cin >> Singleton::Instance()->n1;
	cout << "�veskite antro daugiakampio vir�uni� skai�i�: "; cin >> Singleton::Instance()->n2;

	cout << endl;

	cout << "Pirmojo daugiakampio kamp� suma " << Singleton::Instance()->skaiciuotiSuma(Singleton::Instance()->n1) << endl;
	cout << "Antrojo daugiakampio kamp� suma: " << Singleton::Instance()->skaiciuotiSuma(Singleton::Instance()->n2) << endl;
}