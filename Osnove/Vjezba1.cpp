#include <bits\stdc++.h>

int main(){

    int x,y;

    std::cout<< "Unesi x: ";
    std::cin>> x;
    std::cout<< "Unesi y: ";
    std::cin>> y;

    int temp = x;

    x = y;
    y = temp;

    std::cout<< "'\nNakon zamijene: x = " << x << ", y = " << y;

    return 0;


}