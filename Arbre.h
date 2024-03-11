#include "Roue.h"

class Arbre{
    private:
        Roue* menante;
        Roue* menee;
        double N;
        int sens;
        Arbre* suivant;

    public:
        // Constructeurs
        Arbre(double, int, Roue*, Roue*);
        //~Arbre();

        // Getteurs
        double getN();
        int getSens();
        Roue* getMenante();
        Roue* getMenee();
        Arbre* getSuivant();
        
        // Setteurs
        void setN(double);
        void setSens(int);
        void setMenante(Roue*);
        void setMenee(Roue*);
        void setSuivant(Arbre*);
};