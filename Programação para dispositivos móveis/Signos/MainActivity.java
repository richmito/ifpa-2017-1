package com.example.aluno.signos;

import android.support.v7.app.AlertDialog;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.Spinner;


public class MainActivity extends AppCompatActivity {
    Spinner SpnDia,SpnMes;
    Button btnSigno;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);



        SpnDia = (Spinner) findViewById(R.id.DiaAniversario);
        SpnMes = (Spinner) findViewById(R.id.MesAniversario);

        String strDia = SpnDia.getSelectedItem().toString();
        String strMes = SpnMes.getSelectedItem().toString();
        String[] valorDia = getResources().getStringArray(R.array.Dia);
        String[] valorMes = getResources().getStringArray(R.array.Mes);



        btnSigno = (Button) findViewById(R.id.btnSigno);

        btnSigno.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                int dia = Integer.valueOf(SpnDia.getSelectedItemPosition());
                int mes = Integer.valueOf(SpnMes.getSelectedItemPosition());
                String signo="Falha, tente novamente";
                if (dia>=20&&mes==1|dia<=18&&mes==2) {
                    signo = "Aquário";}
                if (dia>=19&&mes==2|dia<=20&&mes==3) {
                    signo = "Peixes";}
                if(dia>=21&&mes==3|dia<=19&&mes==4){
                    signo = "Áries";}
                if(dia>=20&&mes==4|dia<=20&&mes==5){
                    signo = "Touro";}
                if(dia>=21&&mes==4|dia<=20&&mes==6){
                    signo = "Gêmeos";}
                if(dia>=21&&mes==6|dia<=22&&mes==7){
                    signo = "Câncer";}
                if(dia>=23&&mes==7|dia<=22&&mes==8){
                    signo = "Leão";}
                if(dia>=23&&mes==8|dia<=22&&mes==9){
                    signo = "Virgem";}
                if(dia>=23&&mes==9|dia<=22&&mes==10){
                    signo = "Libra";}
                if(dia>=23&&mes==10|dia<=21&&mes==11){
                    signo = "Escorpião";}
                if(dia>=22&&mes==11|dia<=21&&mes==12){
                    signo = "Sagitário";}
                if(dia>=22&&mes==12|dia<=19&&mes==1){
                    signo = "Capricórnio";}


                AlertDialog.Builder dialogo = new AlertDialog.Builder(MainActivity.this);
                dialogo.setMessage("Seu signo é: "+signo);
                dialogo.setNeutralButton("ok",null);
                dialogo.show();

            }
            });


    }
}
