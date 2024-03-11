#include<iostream>
#include "Arbre.h"

using namespace std;

// Constructeur
Arbre::Arbre(double _N, int _sens, Roue* _menante, Roue* _menee){
    N = _N;
    sens = _sens;
    menante = _menante;
    menee = _menee;
    suivant = nullptr;
}

// Déconstructeur
/*
Arbre::~Arbre() {
    delete menante;
    delete menee;
}*/

// Getteurs
double Arbre::getN(){ return N; }
int Arbre::getSens(){ return sens; }
Roue* Arbre::getMenante(){ return menante; }
Roue* Arbre::getMenee(){ return menee; }
Arbre* Arbre::getSuivant() { return suivant; }

// Setteurs
void Arbre::setN(double _N){ N = _N; }
void Arbre::setSens(int _sens){ sens = _sens; }
void Arbre::setMenante(Roue* _menante){ menante = _menante; }
void Arbre::setMenee(Roue* _menee){ menee = _menee; }
void Arbre::setSuivant(Arbre* _suivant){ suivant = _suivant; }