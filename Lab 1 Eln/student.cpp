#include <iostream>
#include <vector>
using namespace std;
#include "lenda_h.cpp"

class Student {

    private:
        string id;
        string emri;
        const int nrLende = 6;
        vector<Lenda> lendet{ static_cast<size_t>(nrLende) };

    public:
        Student() { // Konstruktori default
            id = "";
            emri = "";
            for (int i = 0; i < nrLende; i++) {
                lendet[i].lexoLenda("Lenda " + to_string(i + 1));
            }
        }

    Student(string emri1, string emri2, string emri3, string emri4, string emri5, string emri6) { // Konstruktori me 6 parametera
        id = "";
        emri = "";
        lendet[0].lexoLenda(emri1);
        lendet[1].lexoLenda(emri2);
        lendet[2].lexoLenda(emri3);
        lendet[3].lexoLenda(emri4);
        lendet[4].lexoLenda(emri5);
        lendet[5].lexoLenda(emri6);
    }

    void lexoEmri(string emri) { // Metoda lexoEmri
        if (emri.length() > 0) {
            this->emri = emri;
        }
        else {
            cout << "Gabim: Emri i studentit nuk mund te jete bosh." << endl;
        } 
    }

    string afishoEmri() { // Metoda afishoEmri
        return emri;
    }

    void lexoId(string id) { // Metoda lexoId
         if (id.length() > 0) {
            this->id = id;
        }
        else {
            cout << "Gabim: Id e studentit nuk mund te jete bosh." << endl;
        } 
    }

    string afishoId() { // Metoda afishoId
        return id;
    }

    int afishoNumLende() { // Metoda afishoNumLende
        return nrLende;
    }

    void lexoNotaProvimiLenda(int nota, int i) { // Metoda lexoNotaProvimiLenda
        if (i >= 1 && i <= nrLende) {
            lendet[i-1].lexoNota(nota);
        }
    }

    int afishoNoteProvimiLenda(int i) { // Metoda afishoNoteProvimiLenda
        if (i >= 1 && i <= nrLende) {
            return lendet[i-1].afishoNota();
        }
        else {
            return 0;
        }
    }

    string afishoEmerLende(int i) { // Metoda afishoEmerLende
        if (i >= 1 && i <= nrLende) {
            return lendet[i-1].afishoLenda();
        }
        else {
            return "";
        }
    }

    bool afishoDhene(int i) { // Metoda afishoDhene
        if (i >= 1 && i <= nrLende) {
            return lendet[i-1].eshteDhene();
        }
        else {
            return false;
        }
    }

    double afishoMesatare() { // Metoda afishoMesatare
        int nota_total = 0;
        int nr_lendeve_te_dhena = 0;
        for (int i = 0; i < nrLende; i++) {
            if (lendet[i].eshteDhene()) {
                nota_total += lendet[i].afishoNota();
                nr_lendeve_te_dhena++;
            }
        }
        if (nr_lendeve_te_dhena > 0) {
            return (double)nota_total / nr_lendeve_te_dhena;
        }
        else {
            return 0;
        }
    }
    void printStudent() { // Metoda printStudent
        cout << "Emri: " << afishoEmri() << endl;
        cout << "ID: " << afishoId() << endl;
        cout << "Lendet: " << endl;
        for (int i=0; i<6; i++) {
            cout << " - " << lendet[i].afishoLenda() << ": ";
            if (lendet[i].eshteDhene()) {
                cout << lendet[i].afishoNota();
            }
            else {
                cout << "nuk eshte dhene";
            }
            cout << endl; // added curly brace here
        }
    }
};