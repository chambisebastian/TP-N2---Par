/*
Descrpcion: Programa que maneja datos de tipo entero, string y booleano
Autor: Sebastian Matias Chambi
23/04/2015
*/
 
#include <iostream>
#include <conio.h>

using namespace std;
int main() {
	int numero;
	cout << "Ingrese un numero entero: ";
	cin >> numero;
	if ((numero%2)==0)
	{
		cout << "\nEl numero ingresado es par";
	}
	else
	{
		cout << "\nEl numero ingresado es impar";
	}
	getch();
}
