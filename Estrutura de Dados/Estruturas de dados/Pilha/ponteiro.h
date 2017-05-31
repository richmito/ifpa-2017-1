#include<iostream>
using namespace std;

struct tNo{ // declaração do tipo tNo para armazenar os elementos do ponteiro e o próximo da pilha
  float elemento; // representa o dado armazenado pelo nó
  tNo *proximo; // representa o próximo nó da pilha
};

typedef tNo *tPtNo;
tPtNo p;

void empilharPonteiro(tPtNo &p, float valor){
  tPtNo q; // declara o ponteiro q que servirá para trabalhar a pilha
  q = new tNo;// associa o ponteiro q a um novo nó
  q->elemento = valor; // recebe o valor por parâmetro e associa ao ponteiro q
  q->proximo = p; //  faz que Q aponte P como próximo nó
  p=q; // P recebe o valor do ponteiro Q, recebendo os valores da função e se tornando próximo
}

bool desempilharPonteiro(tPtNo &p){ // retorna booleano para confirmar que funcionou com sucesso
  tPtNo q;
  if(p == NULL){ // se P for nulo, retorna falso, não conseguiu desempilhar
    return false;
  }else{
    q = p; // ponteiro Q aponta pro endereço de P
    p = p->proximo; // armazena em P o valor do próximo nó, que seria perdido caso simplesmente se apagasse o endereço de P
    free(q); // endereço do ponteiro Q é apagado
    return true; // retorna verdadeiro para confirmar que funcionou com sucesso
  }

}

float acessarTopoPonteiro(tPtNo p){
	if(p == NULL){ // falha de segmentação causada por typo do sinal de igual
	  return -9999999; // função precisa retornar o valor armazenado pelo ponteiro, por isso em caso de erro retorna esse valor estrambólico aí
	}else{
	  return p->elemento; // se a pilha não estiver vazia, retorna o valor armazenado do elemento armazenado
	}

}

void menuPonteiro(tPtNo &p){
	int escolhaMenuPonteiro = -1;
	float valor;
	while(escolhaMenuPonteiro!=0){
		cout<<"\nEscolha uma opcao\n \
		1- Empilhar\n \
		2- Acessar Topo\n \
		3- Desempilhar\n \
		4- Retornar ao menu anterior\n \
		";
		cin>>escolhaMenuPonteiro;
		switch(escolhaMenuPonteiro){
			case 1:
				cout<<"\nQual numero deseja empilhar?\n";
				cin>>valor;
				empilharPonteiro(p,valor);
				break;
				
				
			case 2:
				if(acessarTopoPonteiro(p)==-9999999){
					cout<<"\nAcessar topo falhou, pilha vazia!\n";
				}else{
					cout<<"\nO valor no topo da pilha e: "<<acessarTopoPonteiro(p);
					}
				break;
				
				
			case 3:
				if(desempilharPonteiro(p)){
					cout<<"\nDesempilhado com sucesso\n";
				}else{
					cout<<"\nDesempilhar falhou, pilha vazia!";
					}
				break;
				
				
			case 4:
				escolhaMenuPonteiro=0;
				break;
				
				
			default:
				cout<<"\nOpção invalida, por favor tente novamente\n";
				menuPonteiro(p);
				break;
			
		}
		
		
	}


}
