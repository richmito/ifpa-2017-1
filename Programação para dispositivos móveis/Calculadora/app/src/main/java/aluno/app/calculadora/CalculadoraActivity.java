package aluno.app.calculadora;

import android.support.v7.app.AlertDialog;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.EditText;
import android.widget.Button;

import static aluno.app.calculadora.R.id.btsubtrair;

public class CalculadoraActivity extends AppCompatActivity {

    EditText ednumero1,ednumero2;
    Button btsomar,btsubtrair,btmultiplicar,btdividir;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);


        setContentView(R.layout.activity_calculadora);
        ednumero1 = (EditText) findViewById(R.id.ednumero1);
        ednumero2 = (EditText) findViewById(R.id.ednumero2);
        btsomar = (Button) findViewById(R.id.btsomar);
        btsubtrair = (Button) findViewById(R.id.btsubtrair);
        btmultiplicar = (Button) findViewById(R.id.btmultiplicar);
        btdividir = (Button) findViewById(R.id.btdividir);

        btsomar.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v){
                double num1 = Double.parseDouble(ednumero1.getText().toString());
                double num2 = Double.parseDouble(ednumero2.getText().toString());
                double soma = num1+num2;

                AlertDialog.Builder dialogo = new AlertDialog.Builder(CalculadoraActivity.this);

                dialogo.setTitle("O resultado da soma");
                dialogo.setMessage("A soma é "+soma);
                dialogo.setNeutralButton("ok",null);
                dialogo.show();
            }

        });

        btsubtrair.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v){
                double num1 = Double.parseDouble(ednumero1.getText().toString());
                double num2 = Double.parseDouble(ednumero2.getText().toString());
                double subtracao = num1-num2;
                AlertDialog.Builder dialogo = new AlertDialog.Builder(CalculadoraActivity.this);
                dialogo.setTitle("O resultado da subtração");
                dialogo.setMessage("A subtração é "+subtracao);
                dialogo.setNeutralButton("ok",null);
                dialogo.show();
            }

        });


        btmultiplicar.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v){
                double num1 = Double.parseDouble(ednumero1.getText().toString());
                double num2 = Double.parseDouble(ednumero2.getText().toString());
                double multiplicacao = num1*num2;
                AlertDialog.Builder dialogo = new AlertDialog.Builder(CalculadoraActivity.this);
                dialogo.setTitle("O resultado da multiplicação");
                dialogo.setMessage("A divisão é "+multiplicacao);
                dialogo.setNeutralButton("ok",null);
                dialogo.show();
            }

        });

        btdividir.setOnClickListener(new View.OnClickListener() {
            public void onClick(View v){
                double num1 = Double.parseDouble(ednumero1.getText().toString());
                double num2 = Double.parseDouble(ednumero2.getText().toString());
                double dividir = num1/num2;
                AlertDialog.Builder dialogo = new AlertDialog.Builder(CalculadoraActivity.this);
                dialogo.setTitle("O resultado da divisão");
                dialogo.setMessage("A divisão é "+dividir);
                dialogo.setNeutralButton("ok",null);
                dialogo.show();
            }

        });


    }
}
