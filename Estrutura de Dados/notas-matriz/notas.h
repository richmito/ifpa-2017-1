// notas.h
#include <iostream>
using namespace std;
const int n = 4;
typedef float tnota[n][n];
tnota notas;
float medmat(tnota &notas)
{
	float media;
	int j,soma=0;
	for(j=0;j<n;j++){
		soma = soma+notas[0][j];}
	media=soma/n;
	
	return media;
		
}

float medport(tnota &notas)
{
	float media;
	int j,soma=0;
	for(j=0;j<n;j++){
		soma = soma+notas[1][j];}
	media=soma/n;
	
	return media;
		
}

float medgeo(tnota &notas)
{
	float media;
	int j,soma=0;
	for(j=0;j<n;j++){
		soma = soma+notas[2][j];}
	media=soma/n;
	
	return media;
		
}

float medhist(tnota &notas)
{
	float media;
	int j,soma=0;
	for(j=0;j<n;j++){
		soma = soma+notas[3][j];}
	media=soma/n;
	
	return media;
		
}


void receberMatriz(tnota notas)
{
	//Matriz cuja primeira linha contém as notas de matemática, português, geografia e história, respectivamente.
	
	
	int j;
	for(j=0;j<n;j++)
	{
		cout<<"Insira a "<<j+1<<"a nota de matematica: ";
		cin>>notas[0][j];
			
	}
	for(j=0;j<n;j++)
	{
		cout<<"Insira a "<<j+1<<"a nota de portugues: ";
		cin>>notas[1][j];
		
	}
	for(j=0;j<n;j++)
	{
		cout<<"Insira a "<<j+1<<"a nota de geografia: ";
		cin>>notas[2][j];
	}
	for(j=0;j<n;j++)
	{
		cout<<"Insira a "<<j+1<<"a nota de historia: ";
		cin>>notas[3][j];
	}
	system("cls");
}

void exibirMatriz(tnota notas)
{
	int j=0;
	//Exibir notas de matematica
	cout<<"Notas de matematica\n";
	for(j=0;j<n;j++)
	{
		//insere tabulação para melhor visualização dos valores das notas
		cout<<"\t"<<notas[0][j]<<"\t";
		
	}
	cout<<"\n";
	
	//Exibir notas de portugues
	cout<<"Notas de portugues\n";
	for(j=0;j<n;j++)
	{
		cout<<"\t"<<notas[1][j]<<"\t";
		
	}
	cout<<"\n";
	
	//Exibir notas de geografia
	cout<<"Notas de geografia\n";
	for(j=0;j<n;j++)
	{
		cout<<"\t"<<notas[2][j]<<"\t";
		
	}
	cout<<"\n";
	
	//Exibir notas de historia
	cout<<"Notas de historia\n";
	for(j=0;j<n;j++)
	{
		cout<<"\t"<<notas[3][j]<<"\t";
		
	}
	cout<<"\n";
	
	
	
}

