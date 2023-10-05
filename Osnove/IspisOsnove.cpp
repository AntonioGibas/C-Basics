#include <bits\stdc++.h>

using namespace std;

int main()
{
    // Lakši način jednostavnog ispisa

    std::cout<<"!!!";

    // \n se koristi za novi redak u tekstu

    std::cout<<"\nthis is so easy" << std::endl;

    // no ukoliko želim da ispis krene u novi red - 
    // kostistimo ovaj pristup:
       // std::endl - endline - sljedeći ispis prelazi u novi red

    std::cout<<"red 1..." << std::endl;
    std::cout<<"red 2..." << std::endl;

    // isto tako možemo samo navesti \n umjesto std-a
    // cout koji sadrži smao \n dodaje novi red.

    cout<<'\n';
    std::cout<<"red 3..." << '\n';
    std::cout<<"red 4..." << '\n';

    // ovaj pristup je čak bolji jer endl(endline) flusha -
    // "output buffer"

    return 0;
}

//In C++, the difference between std::cout << "."; and cout << "."; primarily depends on the scope and namespace resolution.

// std::cout << ".";
// Here, std::cout is explicitly specifying the use of the cout object from the std (standard)
// namespace. It ensures that you are using the cout object from the standard C++ library.
// This is the recommended way to use cout in most cases because it avoids naming conflicts
// with other libraries or user-defined objects with the same name.
//   cout << ".";
// In this case, you are using cout without the std:: prefix. 
// Whether this code works or not depends on the current scope and whether you have imported
// the std namespace.
// If you are inside a scope where you have explicitly imported the std namespace using using 
// namespace std;, then cout will work without the std:: prefix. 
// However, this usage is generally discouraged because it can lead to naming conflicts and make
// your code less maintainable.
// To summarize, std::cout << "."; 
// is the more explicit and recommended way to use the cout object from the standard C++ library, 
// ensuring that you are not relying on namespace imports or encountering naming conflicts.