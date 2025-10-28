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
int dodawanie(int a, int b)
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
}