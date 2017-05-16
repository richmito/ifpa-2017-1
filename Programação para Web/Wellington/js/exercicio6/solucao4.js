function cadastrar(){

  var nome = document.getElementById("nome").value;
  var endereco = document.getElementById("endereco").value;
  var bairro = document.getElementById("bairro").value;
  var cpf = document.getElementById("cpf").value;

  if(nome==""){
    document.getElementById("nome").focus();
  }else if (endereco=="") {
    document.getElementById("endereco").focus();
  }else if (bairro="") {
    document.getElementById("bairro").focus();
  }else if (cpf="") {
    document.getElementById("cpf").focus();
  }else{
    alert("Cadastro realizado com sucesso!");
  }


}
