#include <bits\stdc++.h>

int main(){

    char op;
    double num1, num2, res1, res2;

    std::cout<<"************CALCULATOR************" << '\n' << "Unesi samo (+ - * / sqrt)";
    std::cin>> op;

    std::cout<< "Unesi 1: ";
    std::cin>> num1;

    std::cout<< "Unesi 2: ";
    std::cin>> num2;

    switch(op){

        case '+':
            res1 = num1 + num2;
            std::cout<<"Rjesenje je: " << res1;
            break;
        case '-':
            res1 = num1 - num2;
            std::cout<<"Rjesenje je: " << res1;
            break;
        case '*':
            res1 = num1 * num2;
            std::cout<<"Rjesenje je: " << res1;
            break;
        case '/':
            res1 = num1 / num2;
            std::cout<<"Rjesenje je: " << res1;
            break;
        case 's':
            res1 = sqrt(num1);
            res2 = sqrt(num2);
            std::cout<<"Rjesenje1: " << res1 << '\n' << "Rjesenje2: " << res2;
            break; 
        default:
            std::cout<< "Nepoznata operacija, unesi samo + - * / sqrt";
            break;
    }

    return 0;
}