#include <iostream>
#include <fstream>
#include "Voxel.h"
#include "sculptor.h"
using namespace std;

int main(){

    Sculptor steve(90, 130, 50);
    int SomaX = 25 , SomaY = 10 , SomaZ = 25;
        steve.setColor(0.1, 0.1, 0.1, 1.0); // TENIS
        steve.putBox(4 + SomaX, 12 + SomaX , 0 + SomaY , 2 + SomaY , 1 + SomaZ , 6 + SomaZ);

        steve.setColor(0.1, 0.1, 0.5, 1.0); // CALÇA
        steve.putBox(4 + SomaX, 12 + SomaX , 2 + SomaY , 14 + SomaY , 1 + SomaZ , 6 + SomaZ);

        steve.setColor(0.1, 0.1, 0.4, 1.0); // SOMBRAS CALÇA
        steve.putBox(5 + SomaX, 7 + SomaX , 6 + SomaY , 7 + SomaY , 1 + SomaZ , 6 + SomaZ);
        steve.setColor(0.1, 0.1, 0.4, 1.0);
        steve.putBox(9 + SomaX, 11 + SomaX , 6 + SomaY , 7 + SomaY , 1 + SomaZ , 6 + SomaZ);
        steve.setColor(0.1, 0.1, 0.4, 1.0);
        steve.putBox(9 + SomaX, 10 + SomaX , 13 + SomaY , 14 + SomaY , 1 + SomaZ , 6 + SomaZ);
        steve.setColor(0.1, 0.1, 0.4, 1.0);
        steve.putBox(10 + SomaX, 11 + SomaX , 12 + SomaY , 13 + SomaY , 1 + SomaZ , 6 + SomaZ);

        steve.setColor(0.1, 0.8, 0.6, 1.0); // CAMISA
        steve.putBox(4 + SomaX, 12 + SomaX , 14 + SomaY , 24 + SomaY , 1 + SomaZ , 6 + SomaZ);

        steve.setColor(0.1, 0.7, 0.5, 1.0); // SOMBRAS CAMISA
        steve.putBox(4 + SomaX , 6 + SomaX , 18 + SomaY , 20 + SomaY , 1 + SomaZ , 6 + SomaZ);
        steve.setColor(0.1, 0.7, 0.5, 1.0);
        steve.putBox(4 + SomaX , 5 + SomaX , 16 + SomaY , 18 + SomaY , 1 + SomaZ , 6 + SomaZ);
        steve.setColor(0.1, 0.7, 0.5, 1.0);
        steve.putBox(7 + SomaX , 8 + SomaX , 15 + SomaY , 18 + SomaY , 1 + SomaZ , 6 + SomaZ);
        steve.setColor(0.1, 0.7, 0.5, 1.0);
        steve.putBox(4 + SomaX , 7 + SomaX , 14 + SomaY , 15 + SomaY , 1 + SomaZ , 6 + SomaZ);
        steve.setColor(0.1, 0.7, 0.5, 1.0);
        steve.setColor(0.1, 0.7, 0.5, 1.0);
        steve.putBox(7 + SomaX , 9 + SomaX , 20 + SomaY , 22 + SomaY , 1 + SomaZ , 6 + SomaZ);
        steve.setColor(0.1, 0.7, 0.5, 1.0);
        steve.putBox(10 + SomaX , 12 + SomaX , 19 + SomaY , 20 + SomaY , 1 + SomaZ , 6 + SomaZ);
        steve.setColor(0.1, 0.7, 0.5, 1.0);
        steve.putBox(11 + SomaX , 12 + SomaX , 12 + SomaY , 19 + SomaY , 1 + SomaZ , 6 + SomaZ);
        steve.setColor(0.1, 0.8, 0.6, 1.0);
        steve.putBox(10 + SomaX , 11 + SomaX , 13 + SomaY , 19 + SomaY , 1 + SomaZ , 6 + SomaZ);
        steve.setColor(0.8, 0.5, 0.4, 1.0);
        steve.putBox(7 + SomaX, 9 + SomaX , 22 + SomaY , 23 + SomaY , 1 + SomaZ , 6 + SomaZ);// PESCOÇO
        steve.setColor(0.8, 0.5, 0.4, 1.0);
        steve.putBox(6 + SomaX, 10 + SomaX , 23 + SomaY , 24 + SomaY , 1 + SomaZ , 6 + SomaZ);

        steve.setColor(0.1, 0.8, 0.6, 1.0); // MANGAS
        steve.putBox(0 + SomaX , 4 + SomaX , 20 + SomaY , 24 + SomaY , 1 + SomaZ , 6 + SomaZ);
        steve.setColor(0.1, 0.8, 0.6, 1.0);
        steve.putBox(12 + SomaX , 16 + SomaX , 20 + SomaY , 24 + SomaY , 1 + SomaZ , 6 + SomaZ);

        steve.setColor(0.1, 0.7, 0.5, 1.0); // SOMBRAS MANGAS
        steve.putBox(0 + SomaX , 1 + SomaX , 20 + SomaY , 22 + SomaY , 1 + SomaZ , 6 + SomaZ);
        steve.setColor(0.1, 0.7, 0.5, 1.0);
        steve.putBox(3 + SomaX , 4 + SomaX , 20 + SomaY , 21 + SomaY , 1 + SomaZ , 6 + SomaZ);
        steve.setColor(0.1, 0.7, 0.5, 1.0);
        steve.putBox(15 + SomaX , 16 + SomaX , 20 + SomaY , 22 + SomaY , 1 + SomaZ , 6 + SomaZ);
        steve.setColor(0.1, 0.7, 0.5, 1.0);
        steve.putBox(13 + SomaX , 14 + SomaX , 20 + SomaY , 21 + SomaY , 1 + SomaZ , 6 + SomaZ);

        steve.setColor(0.8, 0.5, 0.4, 1.0); // BRAÇOS
        steve.putBox(0 + SomaX , 4 + SomaX , 12 + SomaY , 20 + SomaY , 1 + SomaZ , 6 + SomaZ);
        steve.setColor(0.8, 0.5, 0.4, 1.0); // BRAÇOS
        steve.putBox(12 + SomaX , 16 + SomaX , 12 + SomaY , 20 + SomaY , 1 + SomaZ , 6 + SomaZ);

        steve.cutBox(5 + SomaX, 11 + SomaX , 1 + SomaY , 23 + SomaY , 2 + SomaZ , 5 + SomaZ);

        //CABEÇA..........
        steve.setColor(0.8, 0.5, 0.4, 1.0);
        steve.putBox(4 + SomaX , 12 + SomaX , 24 + SomaY , 32 + SomaY , 0 + SomaZ , 7 + SomaZ);
        //OLHOS
        steve.setColor(0.9 , 0.9 , 0.9 , 1.0);
        steve.putBox(5 + SomaX , 6 + SomaX , 27 + SomaY , 28 + SomaY , 6 + SomaZ , 7 + SomaZ);
        steve.setColor(0.9 , 0.9 , 0.9 , 1.0);
        steve.putBox(10 + SomaX , 11 + SomaX , 27 + SomaY , 28 + SomaY , 6 + SomaZ , 7 + SomaZ);
        steve.setColor(0.1 , 0.1 , 1.0 , 1.0);
        steve.putBox(6 + SomaX , 7 + SomaX , 27 + SomaY , 28 + SomaY , 6 + SomaZ , 7 + SomaZ);
        steve.setColor(0.1 , 0.1 , 0.9 , 1.0);
        steve.putBox(9 + SomaX , 10 + SomaX , 27 + SomaY , 28 + SomaY , 6 + SomaZ , 7 + SomaZ);
        //NARIZ
        steve.setColor(0.5, 0.3, 0.1, 1.0);
        steve.putBox( 7 + SomaX , 9 + SomaX , 26 + SomaY , 27 + SomaY , 6 + SomaZ , 7 + SomaZ);
        //BOCA
        steve.setColor(0.6, 0.3, 0.1, 1.0);
        steve.putBox( 7 + SomaX , 9 + SomaX , 25 + SomaY , 26 + SomaY , 6 + SomaZ , 7 + SomaZ);
        //CALVANHAQUE
        steve.setColor(0.3, 0.2, 0.1, 1.0);
        steve.putVoxel(6 + SomaX , 25 + SomaY , 6 + SomaZ);
        steve.setColor(0.3, 0.2, 0.1, 1.0);
        steve.putVoxel(9 + SomaX , 25 + SomaY , 6 + SomaZ);
        steve.setColor(0.3, 0.2, 0.1, 1.0);
        steve.putBox( 6 + SomaX , 10 + SomaX , 24 + SomaY , 25 + SomaY , 6 + SomaZ , 7 + SomaZ);
        //CABELO
        steve.setColor(0.3, 0.2, 0.1, 1.0);
        steve.putBox(4 + SomaX , 12 + SomaX , 30 + SomaY , 32 + SomaY , 0 + SomaZ , 7 + SomaZ);
        steve.setColor(0.3, 0.2, 0.1, 1.0);
        steve.putBox(4 + SomaX , 12 + SomaX , 30 + SomaY , 32 + SomaY , 0 + SomaZ , 7 + SomaZ);
        steve.setColor(0.3, 0.2, 0.1, 1.0);
        steve.putBox(4 + SomaX , 12 + SomaX , 29 + SomaY , 32 + SomaY , 0 + SomaZ , 6 + SomaZ);
        steve.setColor(0.3, 0.2, 0.1, 1.0);
        steve.putVoxel(4 + SomaX , 29 + SomaY , 6 + SomaZ);
        steve.setColor(0.3, 0.2, 0.1, 1.0);
        steve.putVoxel(11 + SomaX , 29 + SomaY , 6 + SomaZ);
        steve.setColor(0.3, 0.2, 0.1, 1.0);
        steve.putVoxel(4 + SomaX , 28 + SomaY , 5 + SomaZ);
        steve.setColor(0.3, 0.2, 0.1, 1.0);
        steve.putVoxel(11 + SomaX , 28 + SomaY , 5 + SomaZ);
        steve.setColor(0.3, 0.2, 0.1, 1.0);
        steve.putBox(4 + SomaX , 12 + SomaX , 26 + SomaY , 29 + SomaY , 0 + SomaZ , 4 + SomaZ);
        steve.setColor(0.3, 0.2, 0.1, 1.0);
        steve.putBox(4 + SomaX , 12 + SomaX , 25 + SomaY , 26 + SomaY , 0 + SomaZ , 3 + SomaZ);
        steve.setColor(0.3, 0.2, 0.1, 1.0);
        steve.putBox(6 + SomaX , 10 + SomaX , 24 + SomaY , 25 + SomaY , 0 + SomaZ , 3 + SomaZ);

        //ARVORE
        for(int contador = 10 ; contador < 50 ; contador++){
            steve.setColor(0.3, 0.2, 0.1, 1.0);
            steve.putSphere(41,contador,9,6);
            steve.cutBox(0,10,contador+1,contador+10,0,10);
        }
        steve.setColor(0.1, 0.7, 0.2, 1.0);
        steve.putSphere(41 , 47 , 9 , 14 );
        steve.setColor(0.1, 0.7, 0.2, 1.0);
        steve.putSphere(44 , 49 , 11 , 11 );

        //PORTAL NETHER
        steve.setColor(0.1, 0.1, 0.6, 0.4);
        steve.putBox(2 , 4 , 10 , 55 , 0 , 25);
        steve.setColor(0.1, 0.1, 0.2, 1.0);
        steve.putBox(0 , 5 , 10 , 15 , 0 , 25);
        steve.setColor(0.1, 0.1, 0.2, 1.0);
        steve.putBox(0 , 5 , 10 , 60 , 0 , 5);
        steve.setColor(0.1, 0.1, 0.2, 1.0);
        steve.putBox(0 , 5 , 10 , 60 , 20 , 25);
        steve.setColor(0.1, 0.1, 0.2, 1.0);
        steve.putBox(0 , 5 , 53 , 60 , 0 , 25);

        //TERRA
        steve.setColor(0.1, 0.7, 0.2, 1.0);
        steve.putBox(0 , 90 , 0 , 10 , 0 , 50);
        steve.setColor(0.1, 0.7, 0.2, 1.0);
        steve.putSphere( 4 , -15 , 48 , 30);
        steve.cutSphere(4 , -15 , 48 , 25);
        steve.setColor(0.3, 0.2, 0.1, 1.0);
        steve.putSphere( 4 , -15 , 48 , 25);
        steve.cutSphere(4 , -15 , 48 , 20);
        steve.cutBox(0 , 90 , 0 , 7 , 0 , 50);
        steve.setColor(0.3, 0.2, 0.1, 1.0);
        steve.putBox(0 , 90 , 0 , 7 , 0 , 50);
        steve.cutBox(0 , 90 , 0 , 4 , 0 , 50);
        steve.setColor(0.3, 0.2, 0.1, 1.0);
        steve.putBox(0 , 90 , 0 , 3 , 0 , 50);
        steve.setColor(0.3,  0.3, 0.3 , 1.0);
        steve.putBox(0 , 90 , 0 , 4 , 0 , 50);
        steve.setColor(0.3,  0.3, 0.3 , 1.0);
        steve.putSphere( 90 , -15 , 48 , 20);

        //AGUA
        steve.cutSphere(80 , 18 , 30 , 24);
        steve.setColor(0.1, 0.3, 0.9, 0.6);
        steve.putSphere(80 , 18 , 30 , 23);
        steve.setColor(0.1, 0.3, 0.9, 0.6);
        steve.putSphere(80 , 10 , 5 , 13);
        steve.cutBox(52 , 90 , 10 , 45 , 0 , 50);
        steve.setColor(0.3,  0.3, 0.3 , 1.0);
        steve.putBox(0 , 90 , 0 , 3 , 0 , 50);


        //SOL
        steve.setColor(0.9, 0.3, 0.0, 0.5);
        steve.putSphere( 4 , 120 , 0 ,15);
        steve.cutSphere( 4 , 120 , 0 , 14);
        steve.setColor(0.9, 0.7, 0.0, 0.5);
        steve.putSphere( 4 , 120 , 0 , 14);



        steve.writeOFF("steve3d.off");
        return 0;
}

