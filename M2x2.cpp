#include <iostream>
#include "M2x2.h"

//Fonction pour faire la somme de deux matrices d'ordre 2

void somme1 ( float matrice1[2][2], float matrice2[2][2], float resultat[2][2]) {

    for (int i = 0 ; i < 2; i++) {
        for (int j = 0 ; j < 2; j++) {
                        
            resultat[i][j] = matrice1[i][j] + matrice2[i][j];
        }
    }
}

//Fonction pour faire la soustraction de deux matrices d'ordre 2

void soustraction1 ( float matrice1[2][2], float matrice2[2][2], float resultat[2][2]) {
    
    for (int i = 0 ; i < 2; i++) {
        for (int j = 0 ; j < 2; j++) {
                        
            resultat[i][j] = matrice1[i][j] - matrice2[i][j];
        }
    }
}

//Fonction pour faire la multiplication de deux matrices d'ordre 2

void multiplication1 ( float matrice1[2][2], float matrice2[2][2], float resultat[2][2]) {

    int a = 0, b = 0;

    for (int i = 0 ; i < 2; i++) {
        for (int j = 0 ; j < 2; j++) {
                        
            resultat[a][b] += matrice1[0][j] * matrice2[j][i];
        }
        b++;
    }
    
    for (int i = 0 ; i < 2; i++) {
        for (int j = 0 ; j < 2; j++) {
                        
            resultat[a][b] = matrice1[1][j] * matrice2[j][i];
        }
        b++;
    }

}

//Fonction pour calculer le déterminant d'une matrice d'ordre 2

float determinant1 ( float matrice1[2][2] ) {

    float x;

    x = (matrice1[0][0]*matrice1[1][1]) - (matrice1[1][0]*matrice1[0][1]);

    return x;
}  

//Fonction pour calculer l'inverse d'une matrice d'ordre 2

void inverse1 (float matrice1[2][2], float inverse[2][2] ) {

    float x;

    x = (matrice1[0][0]*matrice1[1][1]) - (matrice1[1][0]*matrice1[0][1]);
    
    if ( x == 0 ) { 
        std::cout << "La matrice n'a pas d'inverse car son déterminant = 0." << std::endl;  
    }
        else {

            float inverse[1][1] = {};
            float m ;
            m= 1.0 / x; 

        inverse[0][0] = matrice1[1][1] * m; 
        inverse[0][1] = (-1) * matrice1[0][1] * m; 
        inverse[1][0] = (-1) * matrice1[1][0] * m; 
        inverse[1][1] = matrice1[0][0] * m; 

    }
}

//Fonction pour calculer la transposee d'une matrice d'ordre 2

void transposee1 ( float matrice1[2][2], float resultat[2][2] ) {

    for (int i = 0 ; i < 2; i++) {
        for (int j = 0 ; j < 2; j++) {
                        
            resultat[i][j] = matrice1[j][i];
        }
    }
}

//Fonction pour calculer la trace d'une matrice d'ordre 2

float trace1 ( float matrice1[2][2]) {

    float t = 0;
    for ( int i = 0; i < 2; i++) {
         for ( int j = 0; j < 2; j++) {
        t += matrice1[i][j];
        }  
    }
    return t;

}

// Fontion pour afficher une matrice d'ordre 2
 
void affichage ( float matrice1[2][2] ) {

    for (int i = 0 ; i < 2; i++) {
        for (int j = 0 ; j < 2; j++) {
                        
            std::cout << matrice1[i][j]<< "   " ;
        }
        std::cout << "\n \n" ;
    }
 

}

