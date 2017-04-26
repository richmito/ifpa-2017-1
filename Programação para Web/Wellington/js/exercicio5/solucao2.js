var menor15=0,idade15a30=0,idade31a45=0,idade46a60=0,idade60ouMais=0;
function cadastro(){

  for(i=0;i<15;i++){
    /* Incrementa em um o contador referente a idade inserida, para posterior
    verificação de quantos de cada faixa de idade foram inseridas*/
      idade = parseInt(prompt("Qual sua idade?"+(i+1)+"/15"));
      // contador exibido durante a pergunta de idade mostra quantas vezes a mensagem será repetida, feedback ao usuário
      if(idade<=15){
        menor15++;
      } else if(idade<=30){
        idade15a30++;
      } else if(idade<=45){
        idade31a45++;
      }else if(idade<=60){
        idade46a60++;
      }else {
        idade60ouMais++;
      }
  }
}


function quantidade(){
/* Exibe os contadores registrados durante o cadastro */

  alert("Quantidade de pessoas com: \n \
  Menos de 15 anos: "+menor15+"\n \
  Entre 16 e 30 anos: "+idade15a30+"\n \
  Entre 31 e 45 anos: "+idade31a45+"\n \
  Entre 46 a 60 anos: "+idade46a60+"\n \
  Mais que 60 anos: "+idade60ouMais );
}

function porcentagem(){
/* calcula a porcentagem e exibe o resultado
função parseFloat(num).toFixed(2) define o número de casa decimais de um valor real
Fonte: http://stackoverflow.com/questions/6134039/format-number-to-always-show-2-decimal-places */
  alert("Quantidade de pessoas com: \n \
  Menos de 15 anos: "+parseFloat((( menor15/15)*100)).toFixed(2)+"\n \
  Entre 16 e 30 anos: "+parseFloat(((idade15a30/15)*100)).toFixed(2)+"\n \
  Entre 31 e 45 anos: "+parseFloat(((idade31a45/15)*100)).toFixed(2)+"\n \
  Entre 46 a 60 anos: "+parseFloat(((idade46a60/15)*100)).toFixed(2)+"\n \
  Mais que 60 anos: "+parseFloat(((idade60ouMais/15)*100)).toFixed(2) );


}
