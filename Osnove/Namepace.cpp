#include <bits\stdc++.h>

// using namespace std; - nepotrebno jer std sadrži previše stvari pa može doći do sranja
using std::cout, std::string; // odsada ne moramo više pisati std::cout<< nego samo cout<<, jer se 
                              // std:: podrazumijeva za svaki cout instancu u programu.

namespace nulti{
    int x = 0;
}

namespace prvi{
    int x = 1;
}

namespace drugi{
    int x = 2;
}

    // Namespace - Omogućuje da ne dolazi do confilkta u imenovanju - da ne dođe do
    //             imenovanja koje je isto rezerviranoj riječi C++-a.

int main()
{
    // ukoliko hoćemo ispisati određenu namespace varijablu onda nadodamo:
    // ime ::(dupla dvotočka predstavlja - Operator rezolucije opsega) i ime varijable

   //   std::cout << x << '\n';
   //   std::cout << prvi::x << '\n';
   //   std::cout << drugi::x;

   // Ukoliko hoću mogu navesti namespace koji će se koristiti u cijeloj proceduri
   using namespace drugi;

   cout << x;

    return 0;
}