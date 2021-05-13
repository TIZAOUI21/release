#include <iostream>
#include "location.h"
#include <string>
#include "cout.h"
#include "location.h"
#include "electricite.h"
#include "eau.h"


void presenterMenu();

int main(){
   int choix=0;
   bool fin = false ;
   while (!fin){
       presenterMenu();

       std::cout<<"veuillez faire votre choix: ";
       std::cin>>choix;
       switch (choix) {
           case 1:{
               string nom="";
               int ValeurEspaceMachine=0;
               int CoutLocation=0;
               std::cout<<"veuillez introduire le nom  de l'esppace a calculer sans espace svp:"<<endl;
               std::cin>>nom;
               setNom (string nom);
               std::cout<<"veuillez introduire la valeur de l'esppace a calculer en metres-carres (m²):"<<endl;
               std::cin>>ValeurEspaceMachine;
               setValeurEspaceMachine(int ValeurEspaceMachine);
               std::cout<<"veuillez introduire le cout en sous pour la location d'un mètre-carré pour une période de 30 jours (¢*30jours/m²):"<< endl;
               std::cin>>CoutLocation;
               setCoutLocation(int CoutLocation);
               }
               break;
           case 2:{}
               break;
           case 3:{}
               break;
           case 4:{}
               break;
           case 5:{}
               fin= true ;
               std::cout<<"Au revoir !";
               break;
           default:
               std::cout<<"Mauvais choix!";
       }     ;
    }while(choix >= 6);
    return 0;

   void presenterMenu(){
     std::cout<<"-------------------------MENNU PRINCIPAl--------------------------" <<endl;
     std::cout<<"1 :Ajouter un cout de location avec ses informations"<<endl;
     std::cout<<"2 :Ajouter un cout en electricite avec ses informations"<<endl;
     std::cout<<"3 :Ajouter un cout pour la consommation d'eau avec ses informations"<<endl;
     std::cout<<"4 :Afficher un compte-rendu d'une machine "<<endl;
     std::cout<<"5 :Quitter le logiciel"<<endl;
     std::cout<<"--------------------------------------------------------------------"<<endl;
     }
};