
#ifndef OBDELNIK_H
#define OBDELNIK_H

class Obdelnik
{
public:

    Obdelnik(double a, double b);

    double getKA() const;
    void setKA(double a);
    double getKB() const;
    void setKB(double b);
    double dostanObvod();
    double dostanObsah();

protected:
    double kA; 
    double kB; 
    double mObvod; 
    double mObsah; 

    static double spocitejObvod(double a, double b);
    static double spocitejObsah(double a, double b);

    bool mIsObvodCalculated; 
    bool mIsObsahCalculated;
};
#endif 
