#include <bits\stdc++.h>

int main(){

//    auto x = 0,y = 0,z = 0;  //testni primjer
//    auto i = 1,j = 1;
// for (i = 1; i<=10; i++){
//     for (j = 1; j <= 10; j++){
//            x = i,y = j;
//            z = pow(sqrt(x), 2) + (pow(y, 2));
//            std::cout<< z << '\n';
//        }     
//    }

    double x = 3, y = 4;
    double z;

    //z = std::max(x, y); // provjera koji je broj veći od navedena 2.
    //z = std::min(x, y); //provjera najmanjeg od 2 navedena.
    //z = std::pow(2, 4); //prvi broj na drugi
    //z = std::sqrt(9);   //korijen iz(broj)
    //z = abs(-3);        // najbliži do nule
    //z = round(x);       // zaokružuje decmalni broj
    //z = ceil(x);        // Strop
    //z = floor(x);       // Pod

    // primjer za Hipotenuzu pravog trokuta:

    z = std::sqrt(std::pow(x,2) + std::pow(y,2)); //sqrt funkcija prima samo jedan broj

    std::cout<< z;
    
    return 0;
}