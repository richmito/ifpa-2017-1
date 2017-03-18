package AutenticarTCP;

import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.math.BigInteger;
import java.net.ServerSocket;
import java.net.Socket;
import java.security.MessageDigest;
import java.util.ArrayList;
import java.util.List;


public class Servidor {

	public static void main(String args[]) throws IOException, Exception{
		
		ServerSocket servidor = new ServerSocket (5000);
		System.out.println("Porta 5000 aberta!");
		
		while(true){
			Socket cliente = servidor.accept();
		System.out.println("Nova conexão com o cliente "+ cliente.getInetAddress().getHostAddress());
		
		ObjectInputStream dados = new ObjectInputStream(cliente.getInputStream());
		Usuario usuario = (Usuario) dados.readObject();
		
		
		List<Usuario> cadastro = new ArrayList(); 
		Usuario cadastroUsuario = new Usuario();
		cadastroUsuario.login = "Richelmy";
		cadastroUsuario.senha = "12345";
		MessageDigest md = MessageDigest.getInstance("MD5");
		md.update(cadastroUsuario.senha.getBytes());
		String criptografia = new BigInteger(1,md.digest()).toString(16);
		
		cadastro.add(cadastroUsuario);
		
			
		//Verificando informações de cadastro
		String verificar = "Usuário não existe!";
		
		//Loop para verificar dados
		for(Usuario user : cadastro){
			if (user.login.equals(usuario.login)){
				if(user.senha.equals(usuario.senha)){
					verificar = "Usuário logado!";
				}else{
					verificar = "Senha incorreta!";
				}
				break;
			}
		}
		
		for (int i = 0 ; i < cadastro.size() ; i++){
			Usuario usua = cadastro.get(i);
			
			if(usua.login.equals(usuario.login)){
				if(usua.senha.equals(usuario.senha)){
					verificar = "Usuário logado!";
				}else{
					verificar = "Senha incorreta!";
				}
				break;
			}
		}
		
		//Linha para enviar resposta ao servidor
		ObjectOutputStream res = new ObjectOutputStream(cliente.getOutputStream());
		res.writeObject(verificar);
		
		}
		
		
		
		
		
	}
	
}
