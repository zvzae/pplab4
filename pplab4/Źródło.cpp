#include <stdio.h>
#include <iostream>
using namespace std;
//zad 1
/*void funkcja1(int a, int b)
{
	if (a > b) {
		cout << a;
	}
	else {
		cout << b;
	}
}
int funkcja2 (int a, int b)
{
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}
int main()
{   
	int a, b;
	cout << "Podaj wartosc a" << endl;
	cin >> a;
	cout << "Podaj wartosc b" << endl;
	cin >> b;
	funkcja1(a, b); cout << "\n";
	cout << funkcja2(a,b) << endl;
}*/
//zad2
/*void wyswietlDzielniki(int n)
{
	for (int i=1;  i <= n / 2; i++) {
		if (n/2 % i == 0) {
			cout << i << endl;
		}
	}
}
int main()
{
	int n;
	cout << "Podaj wartosc n" << endl;
	cin >> n;
	wyswietlDzielniki(n);
}*/
//zad3
/*int dodawanie(int a, int b)
{
	return a + b;
}
int odejmowanie(int a, int b)
{
	return a - b;
}
int mnozenie(int a, int b)
{
	return a * b;
}
int dzielenie(int a, int b)
{
	if (b != 0) {
		return a / b;
	}
	else{
		cout << "Nie mozna dzielic przez 0!!!" << endl;
		return -1;
	}

}
int main()
{
	while (1) {
		int a, b;
		char znak;
		cout << "Podaj wartosc a" << endl;
		cin >> a;
		cout << "Podaj wartosc b" << endl;
		cin >> b;
		cout << "Wpisz z klawiatury znak +,-,*,/" << endl;
		cin >> znak;
		switch (znak) {
		case '+':
			cout << dodawanie(a, b) << endl;
			break;
		case '-':
			cout << odejmowanie(a, b) << endl;
			break;
		case'*':
			cout << mnozenie(a, b) << endl;
			break;
		case '/':
			cout << dzielenie(a, b) << endl;
			break;
		}
		cout << "czy chcesz zakonczyc program (wpisz 0)" << endl;
		int x;
		cin >> x;
		if (x == 0) {
			break;
		}
	}
	return 0;
}*/
//zad4
/*int potega(int a, int b)
{
	int wynik = 1;
	for (int i = 0; i < b; i++) {
		wynik *= a;
	}
	return wynik;
}
int main()
{
	int a, b;
	cout << "Podaj wartosc a" << endl;
		cin >> a;
	cout << "Podaj wartosc b" << endl;
	cin >> b;
	cout << potega(a, b) << endl;
}*/
//zad5
/*int silnia(int n)
{
	int wynik = 1;
	for (int i = 1; i <= n; i++) {
		wynik *= i;
	}
	return wynik;
}
int main()
{
	int n;
	cout << "Podaj wartosc n" << endl;
	cin >> n;
	cout << silnia(n) << endl;
}*/
//zad6
/*int potega(int n)
{
	int wynik = 1;
	for (int i = 0; i < n; i++) {
		wynik *= 2;
	}
	return wynik;

}
int main()
{
	int n;
	cout << "podaj n" << endl;
	cin >> n;
	cout << potega(n) << endl;
}*/
/*#include <cmath>
int main()
{
	int podstawa = 2;
	int n;
	cout << "Podaj wartosc n" << endl;
	cin >> n;
	int wynik = pow(podstawa, n);
	cout << wynik << endl;
}*/
//zad7
/*#include <cstdlib>
#include <ctime>
void counter(int luckyNumber)
{
	srand(time(0));
	int licznik = 0;
	for (int i = 0; i < 10; i++) {
		int szczesliwy = rand() % 10 + 1;
		if (szczesliwy == luckyNumber) {
			licznik++;
		}
	}
	cout << "Twoj szczesliwy numerek " << luckyNumber << " pojawil sie " << licznik << " razy" << endl;
	float procent = (licznik / 10.0) * 100.00;
	cout << "To jest " << procent << " % wszystkich wylosowanych liczb" << endl;
}
int main()
{
	int luckyNumber;
	cout << "Podaj szczesliwy numerek" << endl;
	cin >> luckyNumber; cout << "\n";
	counter(luckyNumber);
}*/
//zad8
int parzysta(int n)
{
		return n / 2;
}
int nieparzysta(int n)
{
	return (n - 1) / 2;
}
int main()
{
	int n;
	cout << "Podaj wartosc n" << endl;
	cin >> n;
	for (int i = 1; i <= 100; i++) {
		if (n % 2 == 0) {
			cout << parzysta(n) << endl;
		}
		else {
			cout << nieparzysta(n) << endl;
		}
	}
}