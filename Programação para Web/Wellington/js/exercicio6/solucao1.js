

  function alterar(){
  // Altera os valores dos botões A e B, de 1 e 2, para 3 e 4
  // pode ser feito desse jeito
  // document.getElementById('btnA').value = 3;
  // document.getElementById('btnB').value = 4;
  // ou desse
  var valor1 = document.getElementById("btnA");
  valor1.value = "3";
  var valor2 = document.getElementById("btnB");
  valor2.value = "4";

  }


function voltar(){
// Retorna os botões A e B aos seus valores originais, 1 e 2, respectivamente
document.getElementById('btnA').value = 1;
document.getElementById('btnB').value = 2;
}
