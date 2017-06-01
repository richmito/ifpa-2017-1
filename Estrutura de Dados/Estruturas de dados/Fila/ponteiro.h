#include<iostream>
using namespace std;

struct tNo{ // Nó que armazena o valor e o próximo elemento da fila
	float Dado;
	tNo *proximo;
};
typedef tNo *tPtNo;

struct tDescritor{ // contém os ponteiros que representam o início e o fim da fila
	
	tPtNo Ini;
	tPtNo Fim;
};

tDescritor F; // Armazena os ponteiros de início e fim, ele que vai trabalhar pra ar


void inserirFilaPonteiro(tDescritor &F, float valor){
	tPtNo q; // cria ponteiro temporário
	q = new tNo; // associa esse ponteiro a um novo nó
	q->Dado = valor; // armazena esse ponteiro a um valor recebido pela função
	q->proximo = NULL; // aponta pro próximo elemento da fila, nulo
	
	if(F.Ini==NULL) // se a fila estiver vazia
		F.Ini = q; // inicio da fila aponta para Q
	else
		F.Fim->proximo = q; // se não estiver vazia, aponta Q como último da fila
	F.Fim = q; // ponteiro do fim da fila aponta para Q
	
	
}

bool removerFilaPonteiro(tDescritor &F){
	tPtNo q;
	if(F.Ini == NULL) // se a fila estiver vazia retorna falso, não conseguiu remover da fila
		return false;
	else{
		q = F.Ini; // q recebe o valor do início da fila
		F.Ini = F.Ini->proximo; //inicio da fila recebe o valor do próximo
		free(q); // limpa o endereço do ponteiro Q
		return true; // retorna verdadeiro, conseguiu remover da fila
	}

	
}

float consultarFilaPonteiro(tDescritor F){
	if(F.Ini == NULL)
		return -9999; // retorna erro caso a fila esteja vazia
	else
		return F.Ini->Dado; // retorna o dado armazenado no inicio da fila
}
