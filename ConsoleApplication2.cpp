#include <iostream>
using namespace std;

int main()
{
	//zad1 Napisać program, który wypisuje na konsolę nr albumu studenta (osoby rozwiązującej program)
	cout << "Zadanie 1" << endl;
	string NrAlbumu = "w65506";
	cout << "Moj numer albumu to: " << NrAlbumu << endl;
	cout << endl;

	//zad2 Napisać program, który sprawdza, czy podana liczba całkowita, wczytana z klawiatury jest parzysta, czy nieparzysta. (operator %).
		cout << "Zadanie 2" << endl;
	int a;
	cout << "Podaj liczbe: ", cin >> a;
	if (a % 2 == 0) {
		cout << "Parzysta" << endl;
	}
	else {
		cout << "Nieparzysta" << endl;
	}
	cout << endl;

	//zad3 Napisać program, który pozwala użytkownikowi na wprowadzenie dwóch liczb zmiennoprzecinkowych, a następnie zwraca informację, która z wprowadzonych liczb jest liczbą większą
	cout << "Zadanie 3" << endl;
	float b, c;
	cout << "Podaj liczbe1: ", cin >> b, cout << "Podaj liczbe2: ", cin >> c;
	if (b > c) {
		cout << "Wieksza jest liczba " << b << endl;
	}
	else {
		cout << "Wieksza jest liczba " << c << endl;
	}
	cout << endl;

	//zad4 Napisać program, który pozwala użytkownikowi na wprowadzenie czterech liczb zmiennoprzecinkowych, a następnie zwraca średnią arytmetyczną z wprowadzonych liczb
	cout << "Zadanie 4" << endl;
	float d, e, f, g;
	cout << "Podaj liczbe1: ", cin >> d;
	cout << "Podaj liczbe2: ", cin >> e;
	cout << "Podaj liczbe3: ", cin >> f;
	cout << "Podaj liczbe4: ", cin >> g;
	float srednia = (d + e + f + g) / 4;
	cout << "Srednia wynosi: " << srednia << endl;
	cout << endl;

	//zad5 Napisać prosty kalkulator wykonujący działanie matematyczne (+, -, /, *) na dwóch liczbach podanych z klawiatury, wykorzystując instrukcję switch.
	cout << "Zadanie 5" << endl;
	int wybor;
	float i, j;
	cout << "Podaj liczbe1: ", cin >> i;
	cout << "Podaj liczbe2: ", cin >> j;
	cout << "Operacje matematyczne: " << endl;
	cout << "1. Suma" << endl;
	cout << "2. Roznica" << endl;
	cout << "3. Iloczyn" << endl;
	cout << "4. Iloraz" << endl;
	cout << "Twoj wybor: ", cin >> wybor;
	cout << endl;

	switch (wybor) {
	case 1:
		cout << "Suma " << i << "+" << j << "=" <<i + j << endl;
		break;
	case 2:
		cout << "Roznica " << i << "-" << j << "=" << i - j << endl; 
		break;
	case 3:
		cout << "Iloczyn " << i << "*" << j << "=" << i * j << endl;
		break;
	case 4:
		if (j != 0) {
			cout << "Iloraz " << i << "/" << j << "=" << i / j << endl;
		}
		else {
			cout << "Nie dziel przez 0" << endl;
		}
		break;
	default:
		cout << "Nieistniejąca operacja" << endl;
		break;
	}
	cout << endl;



}