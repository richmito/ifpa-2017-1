#include<iostream>
#include "ponteiro.h"
using namespace std;
float valor;
int main(){
	cout<<"\nQual valor deseja inserir na fila?\n";
	cin>>valor;
	inserirFilaPonteiro(F,valor);
	
	cout<<"\n"<<consultarFilaPonteiro(F)<<"\n";
		
	
	
}
