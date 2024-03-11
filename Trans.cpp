#include <iostream>
#include "Trans.h"

using namespace std;

Trans::Trans(int _sens, double _Ne, double _Ns, int _Nb, Arbre* _arbres){
    sens = _sens;
    Ne = _Ne;
    Ns = _Ns;
    Nb = _Nb;
    arbres = _arbres;
}

Arbre* Trans::getArbres(){ return arbres; }

int Trans::getNbArbres(){
    Arbre* p = getArbres();
    int compteur = 1;
    while (p->getSuivant()){
        compteur++;
        p = p->getSuivant();
    }
    return compteur;
}

void Trans::ajoutArbre(Arbre* newArbre){ 
    if (arbres == nullptr){
        arbres = newArbre;
    } else{
        Arbre* courant = arbres;
        while(courant->getSuivant()){
            courant = courant->getSuivant();
        }
        courant->setSuivant(newArbre);
    }
}

void Trans::parcoursArbre(){
    Arbre* p = getArbres();
    cout << p << endl;
    while (p->getSuivant()){
        cout << p->getSuivant() << endl;
        p = p->getSuivant();
    }
}

void Trans::retraitArbre(int rang){
    if (rang < 0 || rang > getNbArbres()){
        cout << "Rang trop grand" << endl;
    } else{
        Arbre* courant = arbres;
        Arbre* prec = nullptr;
        for (int i=0 ; i<rang ; i++){
            prec = courant;
            courant = courant->getSuivant();
        }
        prec->setSuivant(courant->getSuivant());
    }
}

int main(){
    Roue roue1(3.,2);
    Roue roue2(2.,3);
    Arbre arbre0(10,1,&roue1, &roue2);
    cout << "Arbre 0 : " << &arbre0 << endl;
    Arbre arbre1(10,1,&roue1, &roue2);
    cout << "Arbre 1 : " << &arbre1 << endl;
    Arbre arbre2(10,1,&roue1, &roue2);
    cout << "Arbre 2 : " << &arbre2 << endl;
    Arbre arbre3(10,1,&roue1, &roue2);
    cout << "Arbre 3 : " << &arbre3 << endl;
    Arbre arbre4(10,2,&roue1, &roue2);
    cout << "Arbre 4 : " << &arbre4 << endl;
    arbre0.setSuivant(&arbre1);
    arbre1.setSuivant(&arbre2);
    arbre2.setSuivant(&arbre3);
    
    Trans transmission(1,1,1,1,&arbre0);
    //transmission.ajoutArbre(&arbre4);
    transmission.parcoursArbre();
    transmission.retraitArbre(3);
    cout << " " <<endl;
    transmission.parcoursArbre();
    return 0;
}