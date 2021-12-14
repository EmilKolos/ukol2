#include "Obdelnik.h"
#include "cmath"
#include <iostream>

using namespace std;

Obdelnik::Obdelnik(double a, double b)
{
    kA = a;
    kB = b;
}

double Obdelnik::getKA() const
{
    return kA;
}

void Obdelnik::setKA(double newKA)
{
    if(kA != newKA)
    {
        kA = newKA;
        mIsObsahCalculated = false;
        mIsObvodCalculated = false;
    }
}


double Obdelnik::getKB() const
{
    return kB;
}

void Obdelnik::setKB(double newKB)
{
    if(kB != newKB)
    {
        kB = newKB;
        mIsObsahCalculated = false;
        mIsObvodCalculated = false;
    }
}

double Obdelnik::spocitejObvod(double a, double b)
{
    return 2 * (a + b);
}

double Obdelnik::spocitejObsah(double a, double b)
{
    return a * b;
}


double Obdelnik::dostanObvod()
{
    if(Obdelnik::mIsObvodCalculated == false)
    {
        mObvod = spocitejObvod(kA, kB);
        mIsObvodCalculated = true;
    }
    return mObvod;
}

double Obdelnik::dostanObsah()
{
    if(Obdelnik::mIsObsahCalculated == false)
    {
        mObsah = spocitejObsah(kA, kB);
        mIsObsahCalculated = true;
    }
    return mObsah;
}


