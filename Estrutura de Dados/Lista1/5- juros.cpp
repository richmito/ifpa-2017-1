/*
 Construir um programa que tenha um
 módulo que realize o calculo de uma
 prestação em atraso. Para tanto, utilize a
 fórmula: Pres = Valor + (Valor* (Taxa/100)
 Tempo)
 */
#include <iostream>
using namespace std;
float valor, taxa, tempo;
float juros(float valor, float taxa, float tempo)
{
	return valor+(valor*(taxa/100)*tempo);
}

int main() {
	cout<<"Insira o valor original: ";
	cin>>valor;
	cout<<"Insira a taxa de juros: ";
	cin>>taxa;
	cout<<"Insira quantos meses de atraso: ";
	cin>>tempo;
	cout<<"R$"<<valor<<" com uma taxa de "<<taxa<<"% ao mes, por "<<tempo<<" meses, equivale a R$"<<juros(valor,taxa,tempo);
	
	return 0;
}
