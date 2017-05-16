function entrar(){

  var login = document.getElementById("login").value;
  var senha = document.getElementById("senha").value;


  if(login==""){
    document.getElementById("login").focus();
  }else if (senha=="") {
    document.getElementById("senha").focus();
  }else{
    alert("Cadastro realizado com sucesso!");
  }


}
