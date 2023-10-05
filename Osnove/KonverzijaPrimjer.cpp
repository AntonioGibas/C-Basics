#include <bits\stdc++.h>

int main(){
    
    int correct = 8;
    int questions = 10;

    //Koristeći konverziju tipa možemo promjeniti cijeli broj u realni samo u ovom izračunu.
    double score = correct/(double)questions * 100;

    std::cout << score << "%";

    return 0;
}