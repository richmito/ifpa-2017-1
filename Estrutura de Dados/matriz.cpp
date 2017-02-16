#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/**
int main()
{
	tmat matnotas;
		:
			CriarMat(matnotas);
			result = medmat(matnotas);
			cout<<"A média em matemática foi: "<<result;
}

ver as notas de matemática, verificar apenas o vetor da discplina de matemática
*/

const int n = 4;
typedef float tmat[n][n];
tmat matnotas;
float medmat(tmat &matnotas)
{
	float media;
	int j,soma=0;
	for(j=0;j<n;j++)
		soma = soma+matnotas[0][j];
	media=soma/n;
	return media;
		
}

void receberMatriz(tmat &matnotas)
{
	int j;
	for(j=0;j<n;j++)
	{
		cout<<"Insira a "<<j+1<<"a nota de matematica :";
		cin>>matnotas[0][j];
	}
}

void exibirMatriz(tmat matnotas)
{
	int j;
	cout<<"Resultado da media das notas de matematica ";
	for(j=0;j<n;j++)
	{
		cout<<matnotas[0][j];
		
	}
}


int main(int argc, char** argv) {
	tmat matnotas;
	int i,j;
	receberMatriz(matnotas);
	medmat(matnotas);
	exibirMatriz(matnotas);
	
	return 0;
}
