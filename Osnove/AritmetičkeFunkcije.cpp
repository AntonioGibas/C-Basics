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

    z = std::min(x, y); //provjera jnajmanjeg od 2 navedena.
    std::cout<< z;
    

    return 0;
}