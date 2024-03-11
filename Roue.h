class Roue{
    private:
        int Z;
        double D;
        double M;

    public:
        // Constructeurss
        Roue(double, int);
        Roue(double, double);

        // Getteurs
        int getZ() const;
        double getM() const;
        double getD() const;
        
        // Setteurs
        void setZ(int);
        void setM(double);
        void setD(double);
};