/*
Construir um módulo para calcular o
salário liquido de um professor(a). O
programa deve receber o valor da hora
aula do professor; o número de aulas
dadas no mês e o percentual de desconto
do INSS.

*/


#include <iostream>
float hora,aulas,desconto;
using namespace std;

float salarioliquido(float hora, float aulas, float desconto)
{
	float liquido;
	liquido=((hora*8)*aulas)-(desconto/100);
	return liquido;
}



int main() {
	cout<<"Insira o valor da hora trabalho: ";
	cin>>hora;
	cout<<"Insira a quantidade de dias do mes trabalhados: ";
	cin>>aulas;
	cout<<"Insira a porcentagem de desconto do INSS: ";
	cin>>desconto;
	cout<<"O salario liquido desse professor e de: R$"<<salarioliquido(hora,aulas,desconto);
	
	
	return 0;
}
