#include "header.h"

void Etudiant :: saisir ()
{
    cout << "Nom : " ; cin >> nom ; 
    cout << "Prenom : " ; cin >> prenom ;
    for ( int i=0  ; i < 10 ; i++ )
    {
        cout << " note " << i+1 << " :"<< endl;
        cin >> note[i];
    }
}

void Etudiant :: afficher ( )
{
    cout << "Nom : " << nom << "\t" << " Prenom :" << prenom << "\t" << endl ; 
    for ( int i = 0; i < 10 ; i++)
    {
        cout << " note " << i+1 << " : " << note[i] << endl ;
    }
    
}

float Etudiant :: moyene ( )
{
    float moy = 0;
    for ( int i = 0; i < 10 ; i++)
    {
        moy += note[i];
    }
    return moy/10 ; 
    
} 

bool Etudiant :: admis () 
{
    if ( moyene() >= 10 )
     return true ; 
     else 
     return false;
}

int Etudiant :: exae_quo ( Etudiant E )
{
    if ( E.moyene() > moyene() )
        return -1 ; 
        else if ( E.moyene () == moyene ())
        return 0 ;
        else 
        return 1 ; 
}


