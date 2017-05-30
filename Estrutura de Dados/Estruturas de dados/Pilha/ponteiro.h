#include<iostream>
using namespace std;

typedef struct tNo{
  float elemento;
  tNo *proximo;
};

typedef tNo *tPtNo;
tPtNo p,q;


void empilharPonteiro(tPtNo &p, float valor){
  tPtNo q;
  q = new tNo;
  q->elemento = valor;
  q->proximo = p;
  p=q;
}

bool desempilharPonteiro(tPtNo &p){
  tPtNo q;
  if(p == NULL){
    return false;
  }else{
    q = p;
    p = p->proximo;
    free(q);
  }

}

float acessarTopoPonteiro(tPtNo p){
if(p = NULL){
  return -9999999;
}else{
  return p->elemento;
}

}

//void menuPonteiro(){
