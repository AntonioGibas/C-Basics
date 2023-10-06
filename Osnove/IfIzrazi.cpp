#include <bits\stdc++.h>

int main(){

    int dob;

    std::cout<< "Unesi dob: ";
    std::cin>> dob;

    if (dob >= 18 & dob < 100){
        std::cout<< "Dobrodošao!";
        }

    else if(dob >= 100){
        std::cout<< "Sta ti radis na internetu";
        }

    else if(dob < 0){
        std::cout<< "Nisi jos rođen.";
        }

    else {
        std::cout<< ":(";
        }

    return 0;
}