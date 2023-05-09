#include <iostream>
#include "lenda_h.cpp"

using namespace std;

int main() {

    // a. Krijoni një objekt duke përdorur konstruktorin default. Më pas jepini vlerë atributeve të këtij objekti duke përdorur metodat që keni implementuar në klasë. 

    Lenda lenda1;
    lenda1.lexoLenda("Matematike");
    lenda1.lexoNota(8);

    cout << "Lenda: " << lenda1.afishoLenda() << endl;
    cout << "Nota: " << lenda1.afishoNota() << endl;
    cout << "Provimi eshte dhene? " << lenda1.eshteDhene() << endl;

    cout << endl;

    // b. Krijoni një objekt duke përdorur konstruktorin me një parametër.

    Lenda lenda2("Fizike");
    lenda2.lexoNota(6);

    cout << "Lenda: " << lenda2.afishoLenda() << endl;
    cout << "Nota: " << lenda2.afishoNota() << endl;
    cout << "Provimi eshte dhene? " << lenda2.eshteDhene() << endl;

    cout << endl;

    // c. Krijoni një objekt duke përdorur konstruktorin me 2 parametra.

    Lenda lenda3("Kimia", 7);

    cout << "Lenda: " << lenda3.afishoLenda() << endl;
    cout << "Nota: " << lenda3.afishoNota() << endl;
    cout << "Provimi eshte dhene? " << lenda3.eshteDhene() << endl;

    cout << endl;

    // d. Thërrisni metodën eshteDhene për një objekt.

    cout << "Provimi i lendes " << lenda1.afishoLenda() << " eshte dhene? " << lenda1.eshteDhene() << endl;

    cout << endl;

    // e. Thërrisni metodën krahaso që kthen emrin e lëndës që ka vlerësimin më të ulët të provimit

    cout << "Lenda me vleresim me te ulet eshte: " << lenda1.krahaso(lenda2) << endl;

    return 0;
    
}