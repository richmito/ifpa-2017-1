/* descobrir se um n�mero � par*/

#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int numero;
bool par(int x){
	// se a divi�o de X for igual a 0, ou seja, � um n�mero par, atribui 1 para o booleano Z, caso contr�rio, atribui 0
	// retorna 1 para par e 0 para impar
	
	int y;
	bool z;
	y = x % 2;
	y==0 ? z = 1 : z=0;
	return z;
}


int main() {
	cout<<"Insira o valor a saber se e par ou impar: ";
	cin>>numero;
	if(par(numero)){
	
		cout<<"Ele e par";} 
	else
		cout<<"Ele e impar";
	
	return 0;
}
