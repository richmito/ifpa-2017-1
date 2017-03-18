package AutenticarTCP;

import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.io.PrintStream;
import java.net.Socket;
import java.net.UnknownHostException;
import java.util.Scanner;

import javax.swing.JOptionPane;

public class Cliente {
	public static void main(String args[]) throws Exception, IOException {
		Socket cliente = new Socket("127.0.0.1", 7000);
		System.out.println("Conexão estabelecida.");
		
		ObjectOutputStream saida = new ObjectOutputStream(cliente.getOutputStream());
		
		//Enviando login e senha para o servidor
		Usuario user = new Usuario();
		user.login = JOptionPane.showInputDialog("Login: ");
		user.senha = JOptionPane.showInputDialog("Senha: ");
		saida.writeObject(user);
		
		//Recebendo resposta do servidor
		ObjectInputStream res = new ObjectInputStream(cliente.getInputStream());
		String resposta = (String) res.readObject(); 
		
		//Mensagem de resposta do servidor
		JOptionPane.showMessageDialog(null, resposta);
		
		cliente.close();
		
	}

}
