/*
Construa uma fun��o que calcule o quadrado de um n�mero

*/

#include <iostream>
using namespace std;
float a;
float quadrado(float a){
	a=a*a;
	return a;
}

int main(){
	cout<<"Insira o numero a ser elevado ao quadrado: ";
	cin>>a;
	a=quadrado(a);
	cout<<"O quadrado e igual a: "<<a;
	
	
	return 0;
}
