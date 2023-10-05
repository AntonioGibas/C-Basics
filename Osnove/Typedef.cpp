// Typedef - rezervirana rijeć koja se koristi za dodatna imena (alias) za drugačije
//           tipove podataka. Pomaže pri čitljivosti koda.
//           typedef je zamijenjen s "using" ključnom riječi jer radi bolje.

//napomena: "Koristi ovo samo kada postoji ključna prednost ovoga, inače ne"
#include <bits\stdc++.h>

using std::cout, std::string, std::vector;

using tekst_g = string;
using broj_b = int;
// primjer kako se koristi kod 'using ključne riječi.

typedef string tekst_t;
typedef int broj_a;
typedef vector<std::pair<string, int>> pairlist_t;
// ovo izgleda jako zbunjujuće na prvu, zato sam stavio -
// da se ta cijela deklaracija zove pairlist_t.


int main()
{
    tekst_g tekst_b = " using tekst ";
    broj_b broj_b = 200;

    broj_a broj = 199;
    tekst_t tvojTekst = " Moj tekst ";
    pairlist_t pairlist; // tu je navodimo u main proceduri.

    cout << "varijable s typedef: " << broj << tvojTekst << '\n';
    cout << "varijable s using:   " << broj_b << tekst_b;

    return 0;
}