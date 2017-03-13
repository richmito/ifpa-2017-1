#include <iostream>
using namespace std;
/** pesquisa binária
recebe 10 valores em um vetor
coloca os valores em ordem crescente
verifica 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
const int tamanho=10;
typedef int tvetor[tamanho];
tvetor vetor,vetorOrdenado;
int maior=tamanho,menor=0,meio;
int busca=0;


void receberVetor(tvetor &vetor)
{
	
	int i=0;
	for(i=0;i<tamanho;i++)	
	{
		cout<<"Insira o valor da posicao no "<<i+1<<" : ";
		cin>>vetor[i];
	}
	//system("cls"); 





}


void ordemCrescente()
{
	
}

int pesquisaBinaria(tvetor &vetor, int tamanho,int busca)
{
	/*
	Enquanto valor menor for menor que valor maior
	valor do meio é igual a valor
	verifique se o valor do meio é igual ao valor buscado
	se for menor, valor superior se torna a média anterior
	se for maior, valor inferior se torna a média anterior
	*/

	while(menor<=maior)
	{
	//cout<<"Laco iniciou";
	meio=(maior+menor)/2;
	
	if(busca==vetor[meio]){
		
		return meio+1;} // função retorna o índice do vetor que contém o valor desejado
	else if(busca<meio){
		maior=meio-1; } // se a busca for menor que o valor do meio, a busca continua do meio pra baixo
		else
		{menor=meio+1;}// se a busca for maior que o valor do meio, busca continua do valor do meio pra cima
	
	
	
		
		
	}
}
		
	
int main() {
	receberVetor(vetor);
	
	cout<<"Insira o valor a ser buscado ";
	cin>>busca;
	
	cout<<"O indice do vetor que contem o valor e o "<<pesquisaBinaria(vetor,tamanho,busca);
	
	return 0;
}

