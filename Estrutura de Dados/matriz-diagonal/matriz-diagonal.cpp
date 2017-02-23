/** Programa para somar os valores da diagonal principal
e a soma dos valores da diagonal secundária de uma matriz 3x3

para mexer com a diagonal da matriz, o índice tem que ser igual
*/
#include <iostream>
using namespace std;
const int n=4;
typedef float tmatriz[n][n];
tmatriz matriz;
void preencherMatriz(tmatriz &matriz)
{
	int i=0,j=0;

	for(i=0;i<n;i++)
	{ //laço responsável por mover o índice de linha da matriz
	
		for(j=0;j<n;j++)
		{// laço para mover o índice pela coluna da matriz
		cout<<"Insira o valor da posicao ("<<i<<","<<j<<"): ";
		cin>>matriz[i][j];
			
		}
		
		
	}
	
	
}

void exibirMatriz(tmatriz matriz)
{
	int i=0,j=0;
	
	for(i=0;i<n;i++)
	{ //laço responsável por mover o índice de linha da matriz
	
		for(j=0;j<n;j++)
		{// laço para mover o índice pela coluna da matriz
		cout<<matriz[i][j]<<" ";
		
			
		}
		
		
	}
	
	
}


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	preencherMatriz(matriz);
	exibirMatriz(matriz);
	
	return 0;
}
