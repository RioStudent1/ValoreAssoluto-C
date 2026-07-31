// Includo le direttive

#include <iostream>
#include <cmath>

using namespace std;

// Funzione per calcolare il valore assoluto

int valore(int num) {

    return abs(num);

}

// Funzione principale

int main() {

    int num;

    // Inserimento numero

    cout << "Inserisci un numero, poi premi invio: ";
    cin >> num;

    // Risultato
    
    cout << "\nValore assoluto: " << valore(num);

}