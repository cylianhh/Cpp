//4)
#include "my_class.h"
#include <iostream>

My_Class::My_Class() {} //My_Class:: -> fonction appartient à la classe My_Class

My_Class::My_Class(std::string a) {
    valeur = a;
}

void My_Class::print_my_element(std::string b) {
    std::cout << b << std::endl;
}