#include<iostream>
using namespace std;
// declaração das variáveis
const int n=5;
typedef float tDado[n];
bool OK = true;

struct tPilha{
  int topper;
  tDado elemento[n];

};

tPilha pilha;

void empilhar(float elemento){

  if(pilha.topper==n){// verifica se a pilha já atingiu seu tamanho máximo
  OK=false;
}else if(pilha.topper<0){
  pilha.topper=0; // inicializa a pilha de valor negativo para a primeira posição
  *pilha.elemento[pilha.topper]=elemento; // pilha recebe elemento passado por parâmetro
  pilha.topper++; // topo da pilha é incrementado
  }else{
    // se a pilha já foi inicializada, adiciona elemento normalmente

    *pilha.elemento[pilha.topper]=elemento;
    pilha.topper++;
  }
};




void desempilhar(){
  if(pilha.topper<n){
    OK=false;
    cout<<"\nDesempilhar deu errado, pilha vazia!\n";
  }else{
    pilha.topper--; // decrementando o topo da pilha, o valor armazenado anteriormente é ignorado

  }


}

float acessarTopo(){
  if(pilha.topper<n){ // se a pilha estiver vazia, não há elemento a exibir
    OK=false;
  }else{
    return *pilha.elemento[pilha.topper];
  }
}

 void helloworld(){
   cout<<"\nHello World\n";
 }
