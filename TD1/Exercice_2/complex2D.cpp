//Ex 2

#include "complex2D.h"

//constructeurs
Complex2D::Complex2D(){};
Complex2D::Complex2D(double re, double im){
   this->re = re; 
   this->im = im;
};
Complex2D::Complex2D(double val){
   re=val;
   im=val; 
};
Complex2D::Complex2D(const Complex2D& c){
   re = c.re;
   im = c.im;
}

//get & set
double Complex2D::getRe(){
    return re;
}

double Complex2D::getIm(){
    return im;
}

void Complex2D::set(double re, double im){
   this->re = re;
   this->im = im;
};

//Addition
Complex2D Complex2D::operator+(const Complex2D& c){
   double a = re + c.re;
   double b = im + c.im;

   Complex2D w = Complex2D(a, b);
   return w;
}

//soustraction
Complex2D Complex2D::operator-(const Complex2D& c){
    double a = re - c.re;
    double b = im - c.im;

    return Complex2D(a, b);
}

// Multiplication
Complex2D Complex2D::operator*(const Complex2D& c){
    double a = re * c.re - im * c.im;
    double b = re * c.im + im * c.re;

    return Complex2D(a, b);
}

//fonction carré
double Complex2D::carre(double x){
   return x*x;
}

//division
Complex2D Complex2D::operator/(const Complex2D& c){
    double denominateur = carre(c.re) + carre(c.im);

    double a = (re * c.re + im * c.im) / denominateur;
    double b = (im * c.re - re * c.im) / denominateur;

    return Complex2D(a, b);
}

// Comparaison par module (sans la racine car cela revient au même)
bool Complex2D::operator>(const Complex2D& c){
    double m1 = carre(re) + carre(im);
    double m2 = carre(c.re) + carre(c.im);

    return m1>m2;
}

bool Complex2D::operator<(const Complex2D& c){
    double m1 = carre(re) + carre(im);
    double m2 = carre(c.re) + carre(c.im);

    return m1<m2;
}