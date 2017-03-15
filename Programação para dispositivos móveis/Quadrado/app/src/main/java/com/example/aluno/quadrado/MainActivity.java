package com.example.aluno.quadrado;

import android.support.v7.app.AlertDialog;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.EditText;
import android.widget.ImageButton;

public class MainActivity extends AppCompatActivity {

        EditText editNum1;
        ImageButton btnQuadrado;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        editNum1 = (EditText) findViewById(R.id.editNum1);

        btnQuadrado = (ImageButton) findViewById(R.id.btnQuadrado);

        btnQuadrado.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                double num1 = Double.parseDouble(editNum1.getText().toString());
                double resultado = num1*num1;
                AlertDialog.Builder dialogo = new AlertDialog.Builder(MainActivity.this);
                dialogo.setTitle("Resultado");
                dialogo.setMessage(num1+" elevado ao quadrado é "+resultado);
                dialogo.setNeutralButton("ok",null);
                dialogo.show();


            }
        });



    }
}
