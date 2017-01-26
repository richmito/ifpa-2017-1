/*
onstruir um programa que tenha um
módulo que receba uma temperatura em
graus  centígrados  e  apresente-a
convertida em graus Fahrenheit. A fórmula
de conversão é F =(9 *C +160)/5.
 
 */

#include <iostream>
using namespace std;
float graus;

float celsius_fahreinheit(float celsius)
{
	return (9*celsius+160)/5;
}


int main() {
	cout<<"Insira o valor em celsius: ";
	cin>>graus;
	cout<<graus<<" graus celsius equivalem a "<<celsius_fahreinheit(graus)<<" fahreinheit ";
	return 0;
}
