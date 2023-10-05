#include <bits\stdc++.h>

// Tip Konverzije = konverzija vrijednosti jedne vrste podataka u drugu.
// Primjer: implicitno u automatsko***
// veoma važno!

int main(){

    //Ukoliko vrijendost 3.14 inicijaliziram kao cijeli broj prikazati će se samo 3
    // int x = 3.14;
    // No ako inicijaliziram kao auto x = 3.14; C++ će odrediti o kakvoj je varijabli riječ (void u ovom slučaju)
    // te će dodijeliti taj tip varijable kada se program pokrene

    auto x = 3.14;

    char x = 100;

    std::cout << x << '\n'

    std::cout << x << '\n';
    return 0;
    
}