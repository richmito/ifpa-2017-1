package com.example.aluno.conversortemperatura;

import android.support.v7.app.AlertDialog;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.EditText;
import android.widget.ImageButton;

public class MainActivity extends AppCompatActivity {

    EditText temp;
    ImageButton btnCelsius2Fahreinheit, btnFahreinheit2Celsius;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        temp = (EditText) findViewById(R.id.temperatura);
        btnCelsius2Fahreinheit = (ImageButton) findViewById(R.id.c2f);
        btnFahreinheit2Celsius = (ImageButton) findViewById(R.id.f2c);


        btnCelsius2Fahreinheit.setOnClickListener(new View.OnClickListener(){
          public void onClick(View v){
              double temperatura = Double.parseDouble(temp.getText().toString());
              double fahreinheit = temperatura*1.8+32;
              AlertDialog.Builder dialogo = new AlertDialog.Builder(MainActivity.this);
              dialogo.setTitle("O resultado da conversão");
              dialogo.setMessage(temperatura+"°C equivalem a "+fahreinheit+"°F");
              dialogo.setNeutralButton("ok",null);
              dialogo.show();
          }

        });

        btnFahreinheit2Celsius.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                double temperatura = Double.parseDouble(temp.getText().toString());
                double celsius = (temperatura - 32)* (5/9);
                AlertDialog.Builder dialogo = new AlertDialog.Builder(MainActivity.this);
                dialogo.setTitle("O resultado da conversão");
                dialogo.setMessage(temperatura+"°F equivalem a "+celsius+"°C");
                dialogo.setNeutralButton("ok",null);
                dialogo.show();

            }
        });





    }
}
