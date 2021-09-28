#include "header.h"

using namespace std ; 

int  main() {
Etudiant e ; 
Etudiant e2 ; 
e.saisir();
e.afficher ();

cout << "moyene = " << e.moyene() << endl ;

cout << "admis : " << e.admis () << endl ; 
e2.saisir ();
cout << " comparaison = " << e.exae_quo(e2) << endl ; 
    return 0;

}

