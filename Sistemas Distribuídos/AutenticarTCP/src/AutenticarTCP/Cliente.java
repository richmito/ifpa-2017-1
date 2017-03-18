package AutenticarTCP;

import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.io.PrintStream;
import java.net.Socket;
import java.net.UnknownHostException;
// import java.util.Scanner; // bibliotecas das tentativas iniciais do trabalho com interface de console

import javax.swing.JOptionPane;

public class Cliente {
	public static void main(String args[]) throws Exception, IOException {
		Socket cliente = new Socket("127.0.0.1", 7000);
		System.out.println("Conexão estabelecida.");
		
		ObjectOutputStream saida = new ObjectOutputStream(cliente.getOutputStream());
		
		
		Usuario user = new Usuario();
		user.login = JOptionPane.showInputDialog("Login: ");
		user.senha = JOptionPane.showInputDialog("Senha: ");
		saida.writeObject(user); /* enviando ao server */
		
		
		ObjectInputStream resp = new ObjectInputStream(cliente.getInputStream());
		String resposta = (String) resp.readObject(); /* pedindo a resposta */
		
		
		JOptionPane.showMessageDialog(null, resposta);/* exibindo ao usuário a mensagem recebida*/
		
		cliente.close();
		
	}

}
