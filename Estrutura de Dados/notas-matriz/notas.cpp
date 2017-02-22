#include <iostream>
#include "notas.h"
using namespace std;
/*
Programa para receber 4 notas das disciplinas de matematica, português, geografia e história.
Calcula as médias de cada disciplina
Exibe ao usuário a matriz das notas
Exibe as médias
*/


int main(int argc, char** argv) {
	
	int i,j;
	receberMatriz(notas);
	exibirMatriz(notas);
	cout<<"\nA media dos valores das notas de matematica e igual a "<<medmat(notas);
	cout<<"\nA media dos valores das notas de portugues e igual a "<<medport(notas);
	cout<<"\nA media dos valores das notas de geografia e igual a "<<medgeo(notas);
	cout<<"\nA media dos valores das notas de historia e igual a "<<medhist(notas);
	return 0;
}

