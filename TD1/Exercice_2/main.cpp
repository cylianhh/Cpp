#include <iostream>
#include <string>
#include "complex2D.h"

int main(){
    Complex2D complex;

    Complex2D v(4.0, 5.0);
    Complex2D w(3.0, 2.0);

    Complex2D somme = v + w; // équivalent à : Complex2D somme = v.operator+(w);
    Complex2D difference = v - w;
    Complex2D produit = v * w;
    Complex2D quotient = v / w;
    
    std::cout << "v.re = " << v.getRe() << std::endl;
    std::cout << "v.im = " << v.getIm() << std::endl;

    if (v > w){
        std::cout << "v > w" << std::endl;
    }

    return 0;
}

