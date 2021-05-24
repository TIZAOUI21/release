#include <iostream>
#include <string>
#include "location.h"
#include "cout.h"
#include "electricite.h"
#include "eau.h"


void presenterMenu();
int main(){
    int choix=0;
    cout* ptr_cout[250];
    int index_ptr_cout = 0;
   bool fin = false ;
   while (!fin){
           presenterMenu();
           std::cout<<"veuillez faire votre choix: ";
           std::cin>>choix;
       switch (choix) {
              case 1:{
                       std::string nomMachine = "";
                       int ValeurEspaceMachine = 0 ;
                       int CoutLocation = 0;
                       std::cout<<"veuillez introduire le nom  de l'esppace a calculer sans espace svp:"<<std::endl;
                       std::cin>>nomMachine;
        //               ptr_cout[index_ptr_cout]->setNom();
                       std::cout<<"veuillez introduire la valeur de l'esppace a calculer en metres-carres (metre carre):"<<std::endl;
                       std::cin>>ValeurEspaceMachine;
                       std::cout<<"veuillez introduire le cout en sous pour la location d'un mètre-carré pour une période de 30 jours (¢*30jours/m²):"<< std::endl;
                       std::cin>>CoutLocation;
                       ptr_cout[index_ptr_cout] = new location (nomMachine, ValeurEspaceMachine, CoutLocation);
                       index_ptr_cout++;
                             }
                             break;
              case 2:{
                       std::string nomMachine = "";
                       int VoltageMachine = 0;
                       int AmpirageMchine = 0 ;
                       int CoutElectricite = 0;
                       std::cout<<"veuillez introduire le nom  de l'esppace a calculer sans espace svp:"<<std::endl;
                       std::cin>>nomMachine;
                       std::cout<<"veuillez introduire le voltage  de la machine en volts (V):"<<std::endl;
                       std::cin>>VoltageMachine;
                       std::cout<<"veuillez introduire  l'amperage de la machine en amperes (A):"<<std::endl;
                       std::cin>>AmpirageMchine;
                       std::cout<<"veuillez introduire le cout en sous de l'electricite par kilowatt-heures (¢/kWh)"<<std::endl;
                       std::cin>>CoutElectricite;
                       ptr_cout[index_ptr_cout]  =new Electricite( nomMachine, VoltageMachine, AmpirageMchine, CoutElectricite);
                       index_ptr_cout++;
              }
               break;
               case 3:{
                       std::string nomMachine;
                       float DebitMachine=0;
                       int CoutEau=0;
                       std::cout<<"veuillez introduire le nom  de l'esppace a calculer sans espace svp:"<<std::endl;
                       std::cin>>nomMachine;
                       std::cout<<"veuillez introduire le debit en litres par seconde (L/s):"<<std::endl;
                       std::cin>>DebitMachine;
                       std::cout<<"veuillez introduire le cout de l'eau en sous par litre (¢/L)"<<std::endl;
                       std::cin>>CoutEau;
                       ptr_cout[index_ptr_cout]= new eau( nomMachine, DebitMachine, CoutEau);
                       index_ptr_cout++;
                          }
               break;
           case 4:{
               std::cout<<"veuillez introduire le nom  de l'esppace a calculer sans espace svp:"<<std::endl;
//               std::cin>>nomMachine;
//               std::cout<<cout.getNom()<<":"<<getCoutLocation() <<"     $"<<endl;
           }
               break;
           case 5:{}
               fin= true ;
               std::cout<<"Au revoir !";
               break;
           default:
               std::cout<<"Mauvais choix!";
       };
    }
    for (int i = 0; i <(index_ptr_cout-1); i++) {
        delete ptr_cout[i];
    }
    return 0;
}
void presenterMenu(){
    std::cout<<"-------------------------MENU PRINCIPAl--------------------------" <<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<"1 :Ajouter un cout de location avec ses informations"<<std::endl;
    std::cout<<"2 :Ajouter un cout en electricite avec ses informations"<<std::endl;
    std::cout<<"3 :Ajouter un cout pour la consommation d'eau avec ses informations"<<std::endl;
    std::cout<<"4 :Afficher un compte-rendu d'une machine "<<std::endl;
    std::cout<<"5 :Quitter le logiciel"<<std::endl;
    std::cout<<""<<std::endl;
    std::cout<<"--------------------------------------------------------------------"<<std::endl;
}

