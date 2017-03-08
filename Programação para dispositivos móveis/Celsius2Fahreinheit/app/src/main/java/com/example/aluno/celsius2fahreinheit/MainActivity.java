package com.example.aluno.celsius2fahreinheit;

import android.support.v7.app.AlertDialog;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.EditText;
import android.widget.Button;

public class MainActivity extends AppCompatActivity {

    EditText celsius;
    Button btnConverter;



    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        celsius = (EditText) findViewById(R.id.celsius);
        btnConverter = (Button) findViewById(R.id.btnConverter);


        btnConverter.setOnClickListener(new View.OnClickListener(){

                public void onClick(View v){
                    double temperatura = Double.parseDouble(celsius.getText().toString());
                    double fahreinheit = temperatura*1.8+32;
                    AlertDialog.Builder dialogo = new AlertDialog.Builder(MainActivity.this);
                    dialogo.setTitle("O Resultado da conversão");
                    dialogo.setMessage(temperatura+"ºC equivalem a "+fahreinheit+"ºF");
                    dialogo.setNeutralButton("ok",null);
                    dialogo.show();

            }
        });


    }
}
