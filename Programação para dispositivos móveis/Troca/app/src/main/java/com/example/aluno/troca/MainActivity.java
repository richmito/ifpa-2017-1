package com.example.aluno.troca;

import android.support.v7.app.AlertDialog;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.EditText;
import android.widget.ImageButton;

public class MainActivity extends AppCompatActivity {
    EditText editValor1,editValor2;
    ImageButton btnTroca;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        editValor1 = (EditText) findViewById(R.id.editValor1);
        editValor2 = (EditText) findViewById(R.id.editValor2);
        btnTroca = (ImageButton) findViewById(R.id.btnTroca);

        btnTroca.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                double valor1 = Double.parseDouble(editValor1.getText().toString());
                double valor2 = Double.parseDouble(editValor2.getText().toString());
                double temporario;

                temporario = valor2;
                valor2=valor1;
                valor1=temporario;

                AlertDialog.Builder dialogo  = new AlertDialog.Builder(MainActivity.this);
                dialogo.setTitle("Valores Trocados");
                dialogo.setMessage("Agora o primeiro valor vale "+valor1+" e o segundo valor vale "+valor2);
                dialogo.setNeutralButton("ok",null);
                dialogo.show();


            }
        });


    }
}
