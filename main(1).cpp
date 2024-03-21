#include <stdio.h>
#include <iostream>

int main()
{
    int edad;
    std::cout << "Ingrese su edad: ";
    std::cin >> edad;
    
    if (edad >=18){
        std::cout << "Usted es una persona mayor de edad." << std::endl;
    } else {
        std::cout << "Usted es una persona menor de edad." << std::endl;
    }

    return 0;
}

