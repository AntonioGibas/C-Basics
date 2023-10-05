#include <bits\stdc++.h>

//Program koji holda output i izvršavanje sve dok ne poprimi nekakav unos

int main(){

    int dob;

    std::string ime, prezime;
    std::cout<< "Unesi ime: ";
    std::cin>> ime;
    std::cout<< "Unesi prezime: ";
    std::cin>> prezime;

    std::cout<< ime << ' ' << prezime;

    std::cout<< "Dob: ";
    std::cin>> dob;

    std::cout<< "Korisnik: " << ime << ' ' << prezime << ' ' << "Dob: " << dob;

    return 0;
}