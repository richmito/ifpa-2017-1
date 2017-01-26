/*
Construir uma calculadora que receba
dois valores e efetue as opera��es
b�sicas  (soma,  subtra��o,  divis�o  e
multiplica��o). Deve-se utilizar a estrutura
CASE para cria��o de um menu e sub-
rotinas para cada uma das opera��es.
*/


#include <cstdlib>
#include <iostream>

int resposta=0,valor1,valor2,resultado;
char operacao; // armazena o s�mbolo da opera��o para ser exibida no resultado
bool sair;
using namespace std;

float soma(float a, float b)
{
      float c;
      c=a+b;
      return c;
}

float subtracao(float a,float b)
{
      float c;
      c=a-b;
      return c;
}

float multiplicacao(float a,float b)
{
      float c;
      c=a*b;
      return c;      
}

float divisao(float a,float b)
{
      float c;
      c=a/b;
      return c;
}

void menu()
{
     cout<<"Escolha a operacao a ser feita /n \
     1 para soma\n\
     2 para subtracao\n\
     3 para multiplicacao\n\
     4 para divisao\n\
     5 para sair do programa\n";
     cin>>resposta;
     system("cls");
     
     switch(resposta)
     {
     case 1:
          resultado=soma(valor1,valor2);
          operacao='+'; // atribui o s�mbolo da opera��o, se ela for escolhida no menu  
          break;
     case 2:
          resultado=subtracao(valor1,valor2);
          operacao='-';
          break;
     case 3:
          resultado=multiplicacao(valor1,valor2);
          operacao='x';
          break;
     case 4:
          resultado=divisao(valor1,valor2);
          operacao='/';
          break;
     case 5:
     	  sair=1; // crit�rio pro la�o ser interrompido
          break;
     default:
     		 system("cls");
             cout<<"Opcao invalida, tente novamente\n";
             menu(); // chama o menu novamente at� ser escolhida uma op��o v�lida
			 break;
     
     }
}

int main()
{
    do{ 
		       
        cout<<"Insira o primeiro valor a ser calculado: ";
        cin>>valor1; cout<<"\n";
        system("cls");
        cout<<"Insira o segundo valor a ser calculado: ";
        cin>>valor2; cout<<"\n";
        system("cls");
        menu();
        if(sair==1){break;}; // sai do programa caso o usu�rio escolha 5 no menu
		cout<<"\n"<<valor1<<operacao<<valor2<<"="<<resultado<<"\n";
		system("PAUSE");
		system("cls");
        }while(sair==0);
    
    return EXIT_SUCCESS;
}
