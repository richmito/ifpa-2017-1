#include <iostream>
using namespace std;
/** pesquisa binária
recebe 10 valores em um vetor
coloca os valores em ordem crescente
verifica 



/* run this program using the console pauser or add your own getch, system("pause") or input loop */
const int tamanho=10;
typedef float tvetor[tamanho];
tvetor vetor,vetorOrdenado;



void receberVetor(tvetor vetor)
{
	int i=0;
	for(i=0;i<tamanho;i++)	
	{
		cout<<"Insira o valor da posicao no "<<i<<" : ";
		cin>>vetor[i];
	}
	system("cls");
}


void ordemCrescente()
{
	
}

void pesquisaBinaria(tvetor vetor, int tamanho,float busca)
{
	/*
	verifica o elemento medio inicial do vetor
	comparar valor a ser buscado pelo elemento médio
	se valor buscado for igual, retornar
	se for maior, definir contador como media+1 e contar para mais
	se for menor, definir contador como media-1 e contar pra menos
	*/
	
	int media,
	maior=vetor[tamanho], // vetor ordenado possui maior valor em sua última posição, correspondente ao seu tamanho total
	menor=0; //menor sempre zero, pra ser preenchido na primeira leva da busca
	media = maior/2; // Valor inicial da media 
	if(media==busca)
		return busca; // se valor buscado for igual a media, retornar media
	else if(busca>media) // se valor buscado for maior que a media, define a busca pra parte superior do vetor
		for(i=media+1;i<maior;i++)
		{
			if(busca==vetor[i])
				return vetor[i];
		}
	else if(busca<media)
		for(i=media-1;i>menor;i--)
		{
			if(busca==vetor[i])
				return vetor[i];
		}
		
	
void receberVetor()
{
	
		
}

	
	
}



int main(int argc, char** argv) {
	return 0;
}
