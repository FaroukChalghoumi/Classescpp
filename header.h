#ifndef  HEADER_H_INCLUDED 
#include <string>
#include <iostream>
using namespace std ; 
class Etudiant
{

public:
    string nom ; 
    string prenom ; 
    float note[10];


    void saisir (); 
    void afficher(); 
    float moyene() ;
    bool admis (); 
    int exae_quo ( Etudiant E ); 

};





#endif