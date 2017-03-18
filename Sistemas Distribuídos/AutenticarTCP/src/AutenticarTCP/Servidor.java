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
		
		ServerSocket servidor = new ServerSocket (7000);
		System.out.println("Porta 7000 aberta!");
		
		while(true){
			Socket cliente = servidor.accept();
		System.out.println("Nova conexão com o seguinte cliente"+ cliente.getInetAddress().getHostAddress());
		
		ObjectInputStream dados = new ObjectInputStream(cliente.getInputStream());
		Usuario usuario = (Usuario) dados.readObject();
		
		
		List<Usuario> cadastro = new ArrayList(); 
		Usuario cadastroUsuario = new Usuario();
		cadastroUsuario.login = "Richelmy";
		cadastroUsuario.senha = "memes";
		MessageDigest md = MessageDigest.getInstance("MD5");
		md.update(cadastroUsuario.senha.getBytes());
		String criptografia = new BigInteger(1,md.digest()).toString(16);
		
		cadastro.add(cadastroUsuario);
		
			
		// valor padrão caso nenhum teste seja aprovado
		String testando = "Usuário não existe!";
		

		for(Usuario user : cadastro){ // verificação dos dados
			if (user.login.equals(usuario.login)){
				if(user.senha.equals(usuario.senha)){
					testando = "Usuário logado!";
				}else{
					testando = "Senha incorreta!";
				}
				break;
			}
		}
		
		for (int i = 0 ; i < cadastro.size() ; i++){
			Usuario usua = cadastro.get(i);
			
			if(usua.login.equals(usuario.login)){
				if(usua.senha.equals(usuario.senha)){
					testando = "Usuário logado!";
				}else{
					testando = "Senha errada!";
				}
				break;
			}
		}
		
		
		ObjectOutputStream res = new ObjectOutputStream(cliente.getOutputStream()); // respondendo ao servidor
		res.writeObject(testando);
		
		}
		
		
		
		
		
	}
	
}
