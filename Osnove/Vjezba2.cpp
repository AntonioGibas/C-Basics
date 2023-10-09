#include <bits\stdc++.h>

// Jednostavni progam za pregled unesenog broja.

int main(){

    int uneseniBroj, flag = 1, brojac;

    std::cout<< "Unesi broj: ";
    std::cin>> uneseniBroj;

    for (brojac = 1; brojac <= uneseniBroj; brojac++){

        if (uneseniBroj % brojac == 0){
            flag = 0;
            break;

        }
    }
    if (flag = 1){

        std::cout<< "Uneseni broj je prost.";

    }
    else {

        std::cout<< "Uneseni broj nije prost.";
        
    }
    return 0;
}