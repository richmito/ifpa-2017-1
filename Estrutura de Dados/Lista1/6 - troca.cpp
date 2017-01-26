/* 
Construir uma sub-rotina que efetue a
troca dos valores entre duas variáveis.
Desta forma a variável A passa a ter o
conteúdo da variável B e vice-versa.
Apresentar os valores trocados. 
*/

#include <iostream>
using namespace std;

float a,b;

void troca(float &a,float &b)
{
	float c;
	c=a; // C recebe o valor de A
	a=b; // A recebe o valor de B
	b=c; // B recebe o valor de C, ou seja, A
}


int main() {
	cout<<"Insira o valor A: ";
	cin>>a;
	cout<<"Insira o valor B: ";
	cin>>b;
	troca(a,b);
	cout<<" A agora vale "<<a<<" e B vale "<<b;
	return 0;
}
