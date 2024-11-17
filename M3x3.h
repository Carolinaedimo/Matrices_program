#ifndef __M3x3_H__
#define __M3x3_H__

void somme2 ( float matrice3[3][2], float matrice4[3][2], float resultat2[3][2] );

void soustraction2 ( float matrice3[3][2], float matrice4[3][2], float resultat2[3][2] );

void multiplication2 ( float matrice3[3][2], float matrice4[3][2], float resultat2[3][2] );

float determinant2 ( float matrice3[3][2] );

float inverse2 ( float matrice3[3][2], float inverse[3][2] );

void transposee2 ( float matrice3[3][2], float resultat2[3][2] );

float trace2 ( float matrice3[3][2]);

void affichage2 ( float matrice1[3][2] ) ;

#endif