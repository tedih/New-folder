#include <iostream>
#include <string>
using namespace std;

class Lenda {

    private:
        string emriLendes;
        bool dhene;
        int nota_provimit;

    public:
        Lenda() { // Konstruktori default
            emriLendes = "";
            dhene = false;
            nota_provimit = 0;
        }

        Lenda(string emri) { // Konstruktori me një parameter
            emriLendes = emri;
            dhene = false;
            nota_provimit = 0;
        }

        Lenda(string emri, int nota) { // Konstruktori me dy parametera
            emriLendes = emri;
            dhene = true;
            nota_provimit = nota;
        }

        ~Lenda() { // Destruktori
            cout << "Objekti i klases Lenda u shkaterrua." << endl;
        }

    string afishoLenda() { // Metoda afishoLenda
        return emriLendes;
    }

    void lexoLenda(string emri) {
        if (emri.length() > 0) {
            emriLendes = emri;
        }
        else {
            cout << "Gabim: Emri i lendes nuk mund te jete bosh." << endl;
        }
    }

    int afishoNota() {
        if (dhene)
           cout << "Nota e lendes " << emriLendes << " eshte: " << nota_provimit << endl;
        else
           return 0;
    }

    void lexoNota(int nota) { // Metoda lexoNota
        if (nota >= 0 && nota <= 10) {
            nota_provimit = nota;
            dhene = true;
        }
        else {
            cout << "Gabim: Nota e provimit duhet te jete ne mes te 0 dhe 10." << endl;
        }
    }

    bool eshteDhene() { // Metoda eshteDhene
        return dhene;
    }

    string krahaso(Lenda l2) { // Metoda krahaso
        if (dhene && l2.dhene) {
             if (nota_provimit < l2.nota_provimit) {
                return l2.emriLendes;
            } else if (nota_provimit > l2.nota_provimit) {
                return emriLendes;
            } else {
                return "Të dy lëndët kanë të njëjtën notë (" + to_string(nota_provimit) + ").";
            }
        }
        else {
            return "Nuk mund te krahasohen lëndët sepse provimi nuk është dhënë për të dy lëndët.";
        }
    }
};