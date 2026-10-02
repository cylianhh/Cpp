#ifndef MY_CLASS_H 
#define MY_CLASS_H
#include <string>

class My_Class {
private:
    std::string valeur;

public:
    My_Class();
    My_Class(std::string a); //constructeur
    void print_my_element(std::string b); 
};

#endif