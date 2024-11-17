#include <iostream>
#include "M2x2.h"
#include "M3x3.h"

int main () {
         
        //Choix de la matrice par l'utilisateur

         int choix;
	     std::cout << "Bonjour cher utilisateur. Veuillez choisir l'operation que vous voulez effectuer : \n";
	     std::cout << "1. Matrice d'ordre 2 \n";
	     std::cout << "2. Matrice d'ordre 3 \n";
	     std::cout << "Votre choix (1,2) : ";
	     std::cin >> choix;

         //Si le choix n'est pas compris entre 1 et 2
	  
	     if (choix != 1 && choix != 2) {
             std::cout << "Choix invalide. Veuillez choisir un chiffre entre 1 et 2.\n";
             //continue;
           }
      
     switch (choix) {

	   	//Calcul des fonctions selon le choix
	   	
		  case 1:
		      std::cout << "Vous avez choisi la matrice d'ordre 2. \n" << std::endl;
		      
              //Déclaration des deux matrices

                float matrice1 [2][2];
                float matrice2 [2][2];
                float resultat [2][2];

              //Remplissage de la matrice par l'utilisateur 

              //Première matrice

                std::cout << "Entrez les valeurs de la premiere matrice : \n";
                for (int i = 0 ; i < 2; i++) {
                    for (int j = 0 ; j < 2; j++) {
                        
                        std::cout << "Element [" << i << "][" << j << "] : ";
                        std::cin >> matrice1[i][j];
                    }
                }

                // Deuxieme matrice 

                std::cout << "Entrez les valeurs de la deuxieme matrice : \n";
                for (int i = 0 ; i < 2; i++) {
                    for (int j = 0 ; j < 2; j++) {
                        
                        std::cout << "Element [" << i << "][" << j << "] : ";
                        std::cin >> matrice2[i][j];
                    }
                }


                //Affichage des matrices

                //Première matrice

                std::cout << "matrice1 = \n";
                for (int i = 0 ; i < 2; i++) {
                    for (int j = 0 ; j < 2; j++) {
                        
                        std::cout << matrice1[i][j]<< "   " ;
                    }
                    std::cout << "\n \n" ;
                }

                //Deuxième matrice

                std::cout << "matrice2 = \n";
                for (int i = 0 ; i < 2; i++) {
                    for (int j = 0 ; j < 2; j++) {
                        
                        std::cout<< matrice2[i][j] << "   " ;
                    }
                    std::cout << "\n \n" ;
                }

                //Affiche des resultats

                //Somme des deux matrices
            
             somme1 ( matrice1, matrice2,resultat );
             std::cout << "La somme des deux matrices est : " << std::endl;
             affichage (resultat);
             std::cout << "\n ";

               //Soustraction des deux matrices

             soustraction1 ( matrice1, matrice2, resultat );
             std::cout << "La difference entre les deux matrices est : " << std::endl;
             affichage (resultat);
             std::cout << "\n ";

               //Multiplication des deux matrices

             multiplication1 ( matrice1, matrice2, resultat );
             std::cout << "Le produit des deux matrices est : " << std::endl;
             affichage (resultat);
             std::cout << "\n ";

               //Déterminant de chaque matrice

               float det2,det1;
              det1 = determinant1 ( matrice1 );
             std::cout << "Le determinant de la  premiere matrice  est : "<< det1 << std::endl;
             std::cout << "\n ";
              det2 = determinant1 ( matrice2 );
             std::cout << "Le determinant de la deuxieme matrice  est : " << det2 << std::endl;
             std::cout << "\n "; 

             //Inverse de chaque matrice
             
             float inverse23[2][2], inverse24[2][2];
             inverse1 ( matrice1, inverse23 );
             std::cout << "L'inverse de la premiere matrice est : " << std::endl;
             affichage (inverse23);
             std::cout << "\n ";
             inverse1 ( matrice2, inverse24 );
             std::cout << "L'inverse de la deuxieme matrice est : " << std::endl;
             affichage (inverse24);
             std::cout << "\n ";

             //Transposée de chaque matrice

             transposee1 ( matrice1, resultat );
             std::cout << "La transposee de la premiere matrice est : " << std::endl;
             affichage (resultat);
             std::cout << "\n ";
             transposee1 ( matrice2, resultat );
             std::cout << "La transposee de la deuxieme matrice est : " << std::endl;
             affichage (resultat);
             std::cout << "\n ";

             //Trace de chaque matrice

             float tra2,tra1;
              tra1 = trace1 ( matrice1 );
             std::cout << "La trace de la premiere matrice est : " << tra1 << std::endl;
             std::cout << "\n ";
             tra2 = trace1 ( matrice2 );
             std::cout << "La trace de la deuxieme matrice est : " << tra2 << std::endl;
             trace1 ( matrice2 );
             std::cout << "\n ";

		    
          case 2:
              std::cout << "Vous avez choisi la matrice d'ordre 3. \n" << std::endl;

              //Déclaration du tableau

                float matrice3 [3][2] = {};
                float matrice4 [3][2] = {};
                float resultat2 [3][2] = {};


              //Remplissage de la matrice par l'utilisateur

              //Première matrice 

                std::cout << "Entrez les valeurs de votre matrice : \n";
                for (int i = 0 ; i < 3; i++) {
                    for (int j = 0 ; j < 2; j++) {
                        
                        std::cout << "Element [" << i << "][" << j << "] : ";
                        std::cin >> matrice3[i][j];
                    }
                }

                // Deuxième matrice

                std::cout << "Entrez les valeurs de votre matrice : \n";
                for (int i = 0 ; i < 3; i++) {
                    for (int j = 0 ; j < 2; j++) {
                        
                        std::cout << "Element [" << i << "][" << j << "] : ";
                        std:: cin >> matrice4[i][j];
                    }
                }

                //Affichage de la matrice

                //Première matrice

                std::cout << "matrice1 = \n";
                for (int i = 0 ; i < 3; i++) {
                    for (int j = 0 ; j < 2; j++) {
                        
                        std::cout << matrice3[i][j]<< "   " ;
                    }
                    std::cout << "\n \n" ;
                }

                //Deuxième matrice 

                std::cout << "matrice2 = \n";
                for (int i = 0 ; i < 3; i++) {
                    for (int j = 0 ; j < 2; j++) {
                        
                        std::cout << matrice4[i][j]<< "   " ;
                    }
                    std::cout << "\n \n" ;
                }

                //Affichage des resultats

                //Somme des deux matrices
            
             somme2 ( matrice3, matrice4, resultat2 );
             std::cout << "La somme des deux matrices est : " << std::endl;
             affichage2 (resultat2);
             std::cout << "\n ";

               //Soustraction des deux matrices

             soustraction2 ( matrice3, matrice4, resultat2 );
             std::cout << "La difference entre les deux matrices est : " << std::endl;
             affichage2 (resultat2);
             std::cout << "\n ";

               //Multiplication des deux matrices

             multiplication2 ( matrice3, matrice4, resultat2 );
             std::cout << "Le produit des deux matrices est : " << std::endl;
             affichage2 (resultat2);
             std::cout << "\n ";

               //Déterminant de chaque matrice

               float det3,det4;
              det3 = determinant2 ( matrice1 );
             std::cout << "Le determinant de la  premiere matrice  est : "<< det3 << std::endl;
             std::cout << "\n ";
              det4 = determinant2 ( matrice2 );
             std::cout << "Le determinant de la deuxieme matrice  est : " << det4 << std::endl;
             std::cout << "\n "; 

             //Inverse de chaque matrice
             
             float inverse33[3][2], inverse34[3][2];
             inverse2 ( matrice3, inverse33 );
             std::cout << "L'inverse de la premiere matrice est : " << std::endl;
             affichage2 (inverse33);
             std::cout << "\n ";
             inverse2 ( matrice4, inverse34 );
             std::cout << "L'inverse de la deuxieme matrice est : " << std::endl;
             affichage2 (inverse34);
             std::cout << "\n ";

             //Transposée de chaque matrice

             transposee2 ( matrice3, resultat2 );
             std::cout << "La transposee de la premiere matrice est : " << std::endl;
             affichage2 (resultat2);
             std::cout << "\n ";
             transposee2 ( matrice4, resultat2 );
             std::cout << "La transposee de la deuxieme matrice est : " << std::endl;
             affichage2 (resultat2);
             std::cout << "\n ";

             //Trace de chaque matrice

             float tra3,tra4;
             tra3 = trace2 ( matrice3);
             std::cout << "La trace de la premiere matrice est : " << tra3 << std::endl;
             std::cout << "\n ";
             tra4= trace2 ( matrice4 );
             std::cout << "La trace de la deuxieme matrice est : " << tra4 << std::endl;
             std::cout << "\n ";

              
	   }

     return 0;
}
