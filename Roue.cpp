#include<iostream>
#include "Roue.h"

using namespace std;

// Constructeurs
Roue::Roue(double _M, int _Z){
    M = _M;
    Z = _Z;
    D = Z*M;
}

Roue::Roue(double _D, double _M){
    M = _M;
    D = _D;
    Z = D/M;
}

// Getteurs
int Roue::getZ() { return Z; }
double Roue::getM() { return M; }
double Roue::getD() { return D; }

// Setteurs
void Roue::setZ(int _Z){ Z = _Z; }
void Roue::setM(double _M){ M = _M; }
void Roue::setD(double _D){ D = _D; }