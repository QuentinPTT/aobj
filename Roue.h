class Roue{
    private:
        int Z;
        double D;
        double M;

    public:
        // Constructeurs
        Roue(double, int);
        Roue(double, double);

        // Getteurs
        int getZ();
        double getM();
        double getD();
        
        // Setteurs
        void setZ(int);
        void setM(double);
        void setD(double);
};