#include "Arbre.h"

class Trans{
    private:
        int sens;
        double Ne;
        double Ns;
        int Nb;
        Arbre* arbres;

    public:
        // Constructeur
        Trans(int, double, double, int, Arbre*);

        // Déconstructeur
        //~Trans();

        // Getteurs
        Arbre* getArbres();
        int getNbArbres();
        void parcoursArbre();

        // Setteurs
        void ajoutArbre(Arbre*);
        void retraitArbre(int);

};