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
float valor;
int escolhaMenuVetor=-1; // inicializa o menu com valor diferente das opções


void empilhar(float elemento,tPilha &pilha){

  if(pilha.topper==n){// verifica se a pilha já atingiu seu tamanho máximo
  OK=false;
}else{
    pilha.topper++;
    pilha.elemento[pilha.topper]=elemento;

  }
};

void desempilhar(tPilha &pilha){
  if(pilha.topper<0){
    OK=false;
    cout<<"\nDesempilhar deu errado, pilha vazia!\n";
  }else{
    pilha.topper--; // decrementando o topo da pilha, o valor armazenado anteriormente é ignorado

  }


}

float acessarTopo(tPilha pilha){
  if(pilha.topper<0){ // se a pilha estiver vazia, não há elemento a exibir
    OK=false;
    return -999999;
  }else{
    return pilha.elemento[pilha.topper];
  }
}

void menuVetor(int &escolhaMenuVetor, tPilha &pilha){
  while(escolhaMenuVetor!=4){

    cout<<"\nEscolha uma opção\n \
    1- Empilhar\n \
    2- Acessar Topo\n \
    3- Desempilhar\n \
    4- Retornar ao menu anterior\n \
    ";
    cin>>escolhaMenuVetor;
    cout<<"\n A opção escolhida foi "<<escolhaMenuVetor;
    switch (escolhaMenuVetor){
      case 1:
        cout<<"\nQual o valor a ser empilhado?\n"; \
        cin>>valor;\
        empilhar(valor,pilha);// empilhar não funcionava pq quando era chamada, apenas informava uma das variáveis necessárias
        break; // havia esquecido de colocar os break, não esquecer de dar uma bilada no Jordan
      case 2:
        if(acessarTopo(pilha)==-999999)
          cout<<"\nAcessar topo deu errado, pilha vazia!\n";
        else
          cout<<"\n"<<acessarTopo(pilha);
        break;
      case 3:
        desempilhar(pilha);
        break;
      case 4:
        break;
      default:
        cout<<"\nOpção inválida, por favor tente novamente\n";
        break;



    }
  }
}
