#include <bits\stdc++.h>
// #include <bits\stdc++.h> library sadrži sve standardne C++ biblioteke

#define Ja cout<< "Antonio"<<'\n';
// #define ime_varijable radnja - predefiniranje repetativne radnje kao definirano
// ime koje se može pozvati samo bez ičega bilo gdje.

using namespace std;

int main()
{
    // deklaracija brojevnih varijabli

    int x,y,z,i;             // Deklaracija varijable koja sadrži cijeli broj
    int dob = 21, godina = 2023, dani = 7;          // Sve može ići u isti red
    double cijena = 19.99;   // Souble tip varijabla koje sadrže decimalni broj
    char ocjena = 'A';       // Char je vrsta varijable koja sadrži tekst.
    bool Je = true;          // Boolean je varijabla koja može biti samo da ili ne
    string grad = "Zagreb";

    y = 6;                   // Dodjeljujemo toj varijabli vrijednost
    x = 5; 
    z = (x + y);

    // for fucking petlja
    for(i = 0;i <= 5;i++)
    {
        if (i < 4)
        {
             Je = false;
             //cout << "nije" << '\n';
        }
         else 
        {
            Je = true;
            //cout << "sad je" << '\n';
        }
    }
    // Ukoliko hoćemo incijalizirati varijablu s vrijednosti odmah onda -
    // ju deklariramo kao: " int x = 5; "

    // cout << '\n' <<  cijena << " > " << z << '\n' << ocjena << '\n';
    
    Ja // Poziv definirane funkcije
    cout << grad;
    return 0;
}