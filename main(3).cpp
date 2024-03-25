// Se ingresarán 2 números para realizar las operaciones de suma, resta, multiplicación y división

#include <iostream>

int main()
{
   float num1, num2;
   
   std::cout << "Ingrese el primer número" << std::endl;
   std::cin >> num1;
   
   std::cout << "\nIngrese el segundo número" << std::endl;
   std::cin >> num2;
   
   float suma = num1 + num2;
   float resta = num1 - num2;
   float multiplicación = num1 * num2;
   float división = num1 / num2;
   
   std::cout << "\n\nEl resultado de la suma es:" << suma << std::endl;
   std::cout << "\nEl resultado de la resta es:" << resta << std::endl;
   std::cout << "\nEl resultado de la multiplicación es:" << multiplicación << std::endl;
   std::cout << "\nEl resultado de la división es:" << división << std::endl;
   
    return 0;
}