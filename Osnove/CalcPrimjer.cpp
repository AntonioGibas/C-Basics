#include <bits\stdc++.h>

int main(){

    char op;
    double num1, num2, res;

    std::cout <<"************CALCULATOR************";

    std:cout << "Unesi samo (+ - * /)";
    std::cin>> op;

    std::cout<< "Unesi 1: ";
    std::cin>> num1;

    std::cout<< "Unesi 2: ";
    std::cin>> num2;

    switch(op){

        case '+':
            res = num1 + num2;
            std::cout<<"Rješenje je: " << res;
            break;
        case '-':
            res = num1 - num2;
            std::cout<<"Rješenje je: " << res;
            break;
        case '*':
            res = num1 * num2;
            std::cout<<"Rješenje je: " << res;
            break;
        case '/':
            res = num1 / num2;
            std::cout<<"Rješenje je: " << res;
            break;
        default:
            std::cout<< "Nepoznata operacija, unesi samo + - * /";
            break;
    }

    return 0;
}