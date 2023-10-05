#include <bits\stdc++.h>

// Tip Konverzije = konverzija vrijednosti jedne vrste podataka u drugu.
// Primjer: implicitno u automatsko***
// veoma važno!

int main(){

    //Ukoliko vrijendost 3.14 inicijaliziram kao cijeli broj prikazati će se samo 3
    // int x = 3.14;
    // No ako inicijaliziram kao auto x = 3.14; C++ će odrediti o kakvoj je varijabli riječ (double u ovom slučaju)
    // te će dodijeliti taj tip varijable kada se program pokrene

    auto x = 3.14;

    auto y = 100;

    std::cout << y << '\n';

    std::cout<< (char) 100 << '\n'; // (char) znači da smo pridodjelili vrstu odmah pri ispisu ili deklaraciji
                                    // U ovom slučaju prikazat će se 100ti znak iz tablice ('d').

    std::cout << x << '\n';
    return 0;
    
}