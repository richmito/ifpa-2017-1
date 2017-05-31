#include<iostream>
using namespace std;
// declaração das variáveis
const int n=5;
bool OK = true;

struct tPilha{
  int topper;
  float elemento[n];
};

tPilha pilhaVetor;
float valor;
int escolhaMenuVetor=-1; // inicializa o menu com valor diferente das opções


void empilharVetor(float elemento,tPilha &pilhaVetor){

  if(pilhaVetor.topper==n){// verifica se a pilha já atingiu seu tamanho máximo
  OK=false;
}else{
    pilhaVetor.topper++;
    pilhaVetor.elemento[pilhaVetor.topper]=elemento;

  }
};

void desempilharVetor(tPilha &pilhaVetor){
  if(pilhaVetor.topper<0){
    OK=false;
    cout<<"\nDesempilhar deu errado, pilha vazia!\n";
  }else{
    pilhaVetor.topper--; // decrementando o topo da pilha, o valor armazenado anteriormente é ignorado

  }


}

float acessarTopoVetor(tPilha pilhaVetor){
  if(pilhaVetor.topper<0){ // se a pilha estiver vazia, não há elemento a exibir
    OK=false;
    return -999999;
  }else{
    return pilhaVetor.elemento[pilhaVetor.topper];
  }
}

void menuVetor(int &escolhaMenuVetor, tPilha &pilhaVetor){
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
        empilharVetor(valor,pilhaVetor);// empilhar não funcionava pq quando era chamada, apenas informava uma das variáveis necessárias
        break; // havia esquecido de colocar os break, não esquecer de dar uma bilada no Jordan
      case 2:
        if(acessarTopoVetor(pilhaVetor)==-999999) // -999999 é o código de erro
          cout<<"\nAcessar topo deu errado, pilha vazia!\n";
        else
          cout<<"\n"<<acessarTopoVetor(pilhaVetor);
        break;
      case 3:
        desempilharVetor(pilhaVetor);
        break;
      case 4:
        break;
      default:
        cout<<"\nOpção inválida, por favor tente novamente\n";
        break;



    }
  }
}
