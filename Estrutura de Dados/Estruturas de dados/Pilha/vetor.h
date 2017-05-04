#include<iostream>
using namespace std;
// declaração das variáveis
const int n=5;
bool OK = true;

struct tPilha{
  int topper;
  float elemento[n];


};

tPilha pilha;

int escolhaMenuVetor=-1;


void empilhar(float elemento,tPilha &pilha){

  if(pilha.topper==n){// verifica se a pilha já atingiu seu tamanho máximo
  OK=false;
}else{
    pilha.elemento[pilha.topper]=elemento;
    pilha.topper++;
  }
};

void desempilhar(tPilha &pilha){
  if(pilha.topper==0){
    OK=false;
    cout<<"\nDesempilhar deu errado, pilha vazia!\n";
  }else{
    pilha.topper--; // decrementando o topo da pilha, o valor armazenado anteriormente é ignorado

  }


}

float acessarTopo(tPilha pilha){
  if(pilha.topper<n){ // se a pilha estiver vazia, não há elemento a exibir
    OK=false;
  }else{
    return pilha.elemento[pilha.topper-1];
  }
}

void menuVetor(int &escolhaMenuVetor, tPilha &pilha){
  while(escolhaMenuVetor!=4){

    cout<<"\nEscolha uma opção\n \
    1- Empilhar\n \
    2- Desempilhar\n \
    3- Acessar Topo\n \
    4- Retornar ao menu anterior\n \
    ";
    cin>>escolhaMenuVetor;

    switch (escolhaMenuVetor){
      case 1:
        empilhar(pilha);// empilhar não está funcionando sabe-se lá pq :(
      case 2:
        desempilhar(pilha);
      case 3:
        acessarTopo(pilha);
      case 4:
        break;
      default:
        cout<<"\nOpção inválida, por favor tente novamente\n";



    }
  }
}
