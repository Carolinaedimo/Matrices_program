#ifndef __M2x2_H__
#define __M2x2_H__

void somme1 ( float matrice1[2][2], float matrice2[2][2], float resultat[2][2] );

void soustraction1 ( float matrice1[2][2], float matrice2[2][2], float resultat[2][2] );

void multiplication1 ( float matrice1[2][2] , float matrice2[2][2], float resultat[2][2] );

float determinant1 ( float matrice1[2][2] );

void inverse1 (float matrice1[2][2], float inverse[2][2] );

void transposee1 ( float matrice1[2][2], float resultat[2][2] );

float trace1 ( float matrice1[2][2] );

void affichage ( float matrice1[2][2] ) ;

#endif