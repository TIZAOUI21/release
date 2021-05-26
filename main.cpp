#include <iostream>
#include <string>
#include "location.h"
#include "cout.h"
#include "electricite.h"
#include "eau.h"


void presenterMenu();

int main() {
    int choix = 0;
    cout *ptr_cout[250];
    int index_ptr_cout = 0;
    bool fin = false;
    while (!fin) {
        presenterMenu();
        std::cout << "veuillez faire votre choix: ";
        std::cin >> choix;
        switch (choix) {
            case 1: {
                std::string nomMachine = "";
                int ValeurEspaceMachine = 0;
                int CoutLocation = 0;
                std::cout << "veuillez introduire le nom  de l'esppace a calculer sans espace svp:" << std::endl;
                std::cin >> nomMachine;
                std::cout << "veuillez introduire la valeur de l'esppace a calculer en metres-carres :" << std::endl;
                std::cin >> ValeurEspaceMachine;
                std::cout<< "veuillez introduire le cout en sous pour la location d'un metre-carre pour une periode de 30 jours:"
                        << std::endl;
                std::cin >> CoutLocation;
                ptr_cout[index_ptr_cout] = new location(nomMachine, ValeurEspaceMachine, CoutLocation);
                std::cout << ptr_cout[index_ptr_cout] << std::endl;
                index_ptr_cout++;
            }
                break;
            case 2: {
                std::string nomMachine = "";
                int VoltageMachine = 0;
                int AmpirageMchine = 0;
                int CoutElectricite = 0;
                std::cout << "veuillez introduire le nom  de l'esppace a calculer sans espace svp:" << std::endl;
                std::cin >> nomMachine;
                std::cout << "veuillez introduire le voltage  de la machine en volts (V):" << std::endl;
                std::cin >> VoltageMachine;
                std::cout << "veuillez introduire  l'amperage de la machine en amperes (A):" << std::endl;
                std::cin >> AmpirageMchine;
                std::cout << "veuillez introduire le cout en sous de l'electricite par kilowatt-heures (¢/kWh)"
                          << std::endl;
                std::cin >> CoutElectricite;
                ptr_cout[index_ptr_cout] = new Electricite(nomMachine, VoltageMachine, AmpirageMchine, CoutElectricite);
                index_ptr_cout++;
            }
                break;
            case 3: {
                std::string nomMachine;
                float DebitMachine = 0;
                float CoutEau = 0;
                std::cout << "veuillez introduire le nom  de l'espace a calculer sans espace svp:" << std::endl;
                std::cin >> nomMachine;
                std::cout << "veuillez introduire le debit en litres par seconde (L/s):" << std::endl;
                std::cin >> DebitMachine;
                std::cout << "veuillez introduire le cout de l'eau en sous par litre (¢/L)" << std::endl;
                std::cin >> CoutEau;
                ptr_cout[index_ptr_cout] = new eau(nomMachine, DebitMachine, CoutEau);
                index_ptr_cout++;
            }
                break;
            case 4: {
                int typeMachine = 0;
                int nombreJour = 0;
                std::cout
                        << "veuillez choisir  le type de la machine pour afficher le compte rendu  (1:Location, 2:electricite, 3:eau )"
                        << std::endl;
                std::cin >> typeMachine;
                std::cout << "veuillez introduire le nombre de jour :" << std::endl;
                std::cin >> nombreJour;
                if (typeMachine = 1) {
                    location L;
                    for (int i = 0; i < index_ptr_cout; ++i) {
                        ptr_cout[i]->calculerCout(nombreJour);
                        L.afficherCout();
                    }
                }
                if (typeMachine = 2) {
                    Electricite E;
                    for (int i = 0; i < index_ptr_cout; ++i) {
                        ptr_cout[i]->calculerCout(nombreJour);
                        E.afficherCout();
                    }
                }
                if (typeMachine = 3) {
                    eau e;
                    for (int i = 0; i < index_ptr_cout; ++i) {
                        e.afficherCout();
                    }
                }
            }
                    break;
                    case 5: {
                        fin = true;
                        std::cout << "Au revoir !";
                    }
                    break;
                    default:
                        std::cout << "Mauvais choix!";

            }
                for (int i = 0; i < (index_ptr_cout - 1); i++) {
                    delete ptr_cout[i];
                }
                return 0;
        }
    }
    void presenterMenu() {
        std::cout << "-------------------------MENU PRINCIPAl--------------------------" << std::endl;
        std::cout << "" << std::endl;
        std::cout << "1 :Ajouter le cout de location avec ses informations" << std::endl;
        std::cout << "2 :Ajouter le cout en electricite avec ses informations" << std::endl;
        std::cout << "3 :Ajouter le cout pour la consommation d'eau avec ses informations" << std::endl;
        std::cout << "4 :Afficher le compte-rendu d'une machine " << std::endl;
        std::cout << "5 :Quitter le logiciel" << std::endl;
        std::cout << "" << std::endl;
        std::cout << "--------------------------------------------------------------------" << std::endl;
    }

