#include <iostream>
#include "M3x3.h"
#include "M2x2.h"

//Fonction pour faire la somme de deux matrices d'ordre 3

void somme2 ( float matrice3[3][2], float matrice4[3][2], float resultat2[3][2]) {

    for (int i = 0 ; i < 3; i++) {
        for (int j = 0 ; j < 2; j++) {
                        
            resultat2[i][j] = matrice3[i][j] + matrice4[i][j];
        }
    }
}

//Fonction pour faire la soustraction de deux matrices d'ordre 3

void soustraction2 ( float matrice3[3][2], float matrice4[3][2], float resultat2[3][2]) {
    
    for (int i = 0 ; i < 3; i++) {
        for (int j = 0 ; j < 2; j++) {
                        
            resultat2[i][j] = matrice3[i][j] - matrice4[i][j];
        }
    }
}

//Fonction pour faire la multiplication de deux matrices d'ordre 3

void multiplication2 ( float matrice3[3][2], float matrice4[3][2], float resultat2[3][2]) {

    int a = 0, b = 0;

    for (int i = 0 ; i < 3; i++) {
        for (int j = 0 ; j < 2; j++) {
                        
            resultat2[a][b] += matrice3[0][j] * matrice4[j][i];
        }
        b++;
    }

     a = 1;
      b = 0;

    for (int i = 0 ; i < 3; i++) {
        for (int j = 0 ; j < 2; j++) {
                        
            resultat2[a][b] = matrice3[1][j] * matrice4[j][i];
        }
        b++;
    }

     a = 2;
      b = 0;

    for (int i = 0 ; i < 3; i++) {
        for (int j = 0 ; j < 2; j++) {
                        
            resultat2[a][b] += matrice3[2][j] * matrice4[j][i];
        }
        b++;
    }

}

//Fonction pour calculer le déterminant d'une matrice d'ordre 3

float determinant2 ( float matrice3[3][2] ) {

    float x; 
    float y; 
    float z;

    x = (matrice3[1][0]*matrice3[2][1]) - (matrice3[2][0]*matrice3[1][1]);
    y = (matrice3[2][0]*matrice3[0][1]) - (matrice3[0][0]*matrice3[2][1]);
    z = (matrice3[0][0]*matrice3[1][1]) - (matrice3[1][0]*matrice3[0][1]);
     
     return x - y - z ;
}

//Fonction pour calculer l'inverse d'une matrice d'ordre 3


float inverse2 (float matrice3[3][2], float inverse[3][2] ) {

    float x;
    float y;
    float z;
    float m;
    float w;
    float resultat2[3][2];

    x = (matrice3[1][0]*matrice3[2][1]) - (matrice3[2][0]*matrice3[1][1]);
    y = (matrice3[2][0]*matrice3[0][1]) - (matrice3[0][0]*matrice3[2][1]);
    z = (matrice3[0][0]*matrice3[1][1]) - (matrice3[1][0]*matrice3[0][1]);
     
     w = x - y - z ;

     for (int i = 0 ; i < 3; i++) {
        for (int j = 0 ; j < 2; j++) {
                        
            resultat2[i][j] = matrice3[j][i];
        }
    }

         if ( w != 0){
            for (int i = 0 ; i < 3; i++) {
                for (int j = 0 ; j < 2; j++) {
                    m = resultat2[i][j] / w;
                }
            }

        } else {
        std::cout << "Votre matrice ne possède pas d'inverse. "<< std::endl;

        
    } return m;
}

//Fonction pour calculer la transposée d'une matrice d'ordre 3


void transposee2 ( float matrice3[3][2], float resultat2[3][2] ) {

    for (int i = 0 ; i < 3; i++) {
        for (int j = 0 ; j < 2; j++) {
                        
            resultat2[i][j] = matrice3[j][i];
        }
    }
}

//Fonction pour calculer la trace d'une matrice d'ordre 3


float trace2 ( float matrice3[3][2]) {

    float t = 0;

    for ( int i = 0; i < 3; i++) {
        for ( int j = 0; j < 2; j++) {
        t += matrice3[i][j];
    }
    }
    return t;
}

// Fontion pour afficher une matrice d'ordre 3

void affichage2 ( float matrice3[2][2] ) {

    for (int i = 0 ; i < 3; i++) {
        for (int j = 0 ; j < 2; j++) {
                        
            std::cout << matrice3[i][j]<< "   " ;
        }
        std::cout << "\n \n" ;
    }

}      
    

