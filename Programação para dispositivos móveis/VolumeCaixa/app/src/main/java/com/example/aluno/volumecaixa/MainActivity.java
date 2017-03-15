package com.example.aluno.volumecaixa;

import android.provider.ContactsContract;
import android.support.v7.app.AlertDialog;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.EditText;
import android.widget.ImageButton;

public class MainActivity extends AppCompatActivity {

    EditText editAltura,editComprimento,editLargura;
    ImageButton btnCalcular;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        editAltura = (EditText) findViewById(R.id.editAltura);
        editComprimento = (EditText) findViewById(R.id.editComprimento);
        editLargura = (EditText) findViewById(R.id.editLargura);
        btnCalcular = (ImageButton) findViewById(R.id.btnCalcular);


        btnCalcular.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                double altura = Double.parseDouble(editAltura.getText().toString());
                double largura = Double.parseDouble(editLargura.getText().toString());
                double comprimento = Double.parseDouble(editComprimento.getText().toString());

                double volume = comprimento*altura*largura;

                AlertDialog.Builder dialogo = new AlertDialog.Builder(MainActivity.this);
                dialogo.setTitle("Resultado do cálculo");
                dialogo.setMessage("O volume desta caixa vale "+volume);
                dialogo.setNeutralButton("ok",null);
                dialogo.show();



            }
        });

    }
}
