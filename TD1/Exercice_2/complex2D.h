//Ex 2

#ifndef COMPLEX2D_H 
#define COMPLEX2D_H

class Complex2D
{
private:
   double re;
   double im;

public :
   Complex2D();
   Complex2D(double re, double im);
   Complex2D(double val);
   Complex2D(const Complex2D& c); //constructeur de copie

   double getRe();
   double getIm();
   void set(double re, double im);

   // Opérateurs
   Complex2D operator+(const Complex2D& c);
   Complex2D operator-(const Complex2D& c);
   Complex2D operator*(const Complex2D& c);
   Complex2D operator/(const Complex2D& c);

   bool operator<(const Complex2D& c);
   bool operator>(const Complex2D& c);
   
private:
    double carre(double x);
};

#endif