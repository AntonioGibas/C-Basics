#include <bits\stdc++.h>

//Program koji holda output i izvršavanje sve dok ne poprimi nekakav unos

int main(){

    int dob;

    std::string ime;
    std::cout<< "Unesi ime i prezime: ";
    //std::cin>> ime;

    std::getline(std::cin, ime);
    std::cout<< ime;

    std::cout<< "Unesi Dob: ";
    std::cin>> dob;

    std::cout<< "Korisnik: " << ime << ' ' << "Dob: " << dob;

    // Ukoliko želimo da dio unosa sadrži razmake kao jedninični unos uz char 
    // string onda koristimo funkciju std::getline(std::cin, var);

    std::getline(std::cin, ime);

    return 0;
}