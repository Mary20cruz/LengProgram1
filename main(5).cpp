//Calculo de RFC

#include <iostream>
#include <string>

using namespace std;

//Función donde se calculará la vocal interna de una cadena de texto
char obtenerPrimeraVocalInterna(const std::string& str) {
         for(size_t i = 1; i < str.length(); ++i) {
             char c = str[i];
             if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
             return c;
     }
     return 'X'; // Si no hay vocal interna se mostrará X
}

//Funcion principal donde se realizará el Cálculo del RFC 
std::string calcularRFC(const std::string& nombre, const std::string& apellidoPaterno, const std::string& apellidoMaterno, const std::string& fechaNacimiento){
     std::string rfc;
     
     //Obtener la letra inicial y la primera vocal interna del apellido paterno
     char letraIncial = apellidoPaterno[0];
     char primeraVocalInterna = obtenerPrimeraVocalInterna(apellidoPaterno);
     
     //Obtener la letra incial del apellido materno o usar una 'X' si no cuenta con apelllido materno
     char incialApellidoMaterno = (!apellidoMaterno.empty()) ? apellidoMaterno[0] : 'X';
     
     //Obtener la letra incial del primer nombre
     char inicialNombre = nombre[0];
     
     //Obtenerlos dos últimos dígitos del año de nacimiento
     std::string anio = fechaNacimiento.substr(2,2);
     
     //Obtener el mes de nacimiento
     std::string mes = fechaNacimiento.substr(5,2);
     
     //Obtener el día de nacimiento
     std::string dia = fechaNacimiento.substr(8,2);
     
     //Crear el RFC 
     rfc = letraIncial;
     rfc += primeraVocalInterna;
     rfc += incialApellidoMaterno;
     rfc += inicialNombre;
     rfc += anio;
     rfc += mes;
     rfc += dia;
     
     return rfc;
     
}

//Imprimir datos para obtener RFC
int main(){
    std::string nombre, apellidoPaterno, apellidoMaterno, fechaNacimiento;
    
    std::cout << "Calculo de RFC \n\n";
    
    std::cout << "Ingrese el nombre(s): ";
    std::getline(std::cin, nombre);
    
    std::cout << "Ingrese el apellido paterno: ";
    std::getline(std::cin, apellidoPaterno);
    
    std::cout << "Ingrese el apellido materno (si no tiene, presione <Enter>): ";
    std::getline(std::cin, apellidoMaterno);
    
    std::cout << "Ingrese la fecha de nacimiento en el siguiente orden (YYYY-MM-DD): ";
    std::getline(std::cin, fechaNacimiento);
    
    std::string rfc = calcularRFC(nombre, apellidoPaterno, apellidoMaterno, fechaNacimiento);
    std::cout << "Su RFC sin homoclave es: \n " << rfc << std::endl;
    
    return 0;
}

