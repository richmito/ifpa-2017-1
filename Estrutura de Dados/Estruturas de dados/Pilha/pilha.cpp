#include <iostream>
#include "vetor.h"
#include "ponteiro.h"
using namespace std;
int escolhaMenuMain=-1;


 void menuMain(){

 while(escolhaMenuMain != 999){

     cout<<"\nDeseja uma pilha com vetor ou com ponteiro?\n \
	1 - Pilha com Vetor\n \
	2 - Pilha com Ponteiro\n \
	3 - Sair do programa\n ";
     cin>>escolhaMenuMain;
     switch(escolhaMenuMain){

       case 1:
       pilhaVetor.topper=-1; // inicializa o topo da pilha como um valor abaixo da primeira posição
       menuVetor(escolhaMenuVetor,pilhaVetor);
       break;

       case 2:
       menuPonteiro(p);
       break;

       case 3:
       cout<<"\nSaindo...\n";
       escolhaMenuMain=999;
       break;

       default:
       cout<<"\nOpção não reconhecida, tente novamente\n";
       menuMain();
       break;

   }
  }
 }



int main(){
menuMain();

}
