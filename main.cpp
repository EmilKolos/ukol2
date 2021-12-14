#include <iostream>
#include "Obdelnik.h"

using namespace std;

int main()
{
    Obdelnik o1(4,6);


    cout <<"<----------------------------------------->" << endl;
    cout <<"Strana obdelniku A ma rozmer: " << o1.getKA() << endl;
    cout <<"Strana obdelniku B ma rozmer: " << o1.getKB() << endl;
    cout <<"Obsah obdelniku je: " << o1.dostanObsah() << endl;
    cout <<"Obvod obdelniku je: " << o1.dostanObvod() << endl;

    o1.setKA(12.6);
    o1.setKB(18.4);

    cout <<"<----------------------------------------->" << endl;
    cout <<"Strana obdelniku A ma rozmer: " << o1.getKA() << endl;
    cout <<"Strana obdelniku B ma rozmer: " << o1.getKB() << endl;
    cout <<"Obsah obdelniku je: " << o1.dostanObsah() << endl;
    cout <<"Obvod obdelniku je: " << o1.dostanObvod() << endl;
    return 0;
}
