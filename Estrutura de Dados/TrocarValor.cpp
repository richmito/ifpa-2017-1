#include <iostream>
int a,b;
using namespace std;

void trocar(int &a, int &b)
{
	int c; // cria variável temporária C
	c=a; // C recebe valor de A
	a=b; // A recebe o valor de B
	b=c; // B recebe valor de A
};

int main() {
		
	cout <<"O valor de A e 1, o valor de B e 2\n";
	a=1;
	b=2;
	trocar(a,b);
	cout<<"O valor de A e: "<< a <<", e de B e: "<< b <<endl;
	return 0;
}
