#include <iostream>
#include <string>
#include "print.h"
#include "my_class.h"

/*Ex 1
1)
int main() {
    std::cout << "Hello World!" << std::endl;
    return 0;
}*/

/*2)
void print(std::string a){
    std::cout << a << std::endl;
}*/

int main() {
    //print("Hello");
    My_Class classe;

    classe.print_my_element("Hello");
    return 0;
}

